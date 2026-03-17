#include <iostream>
#include "TransportArr.h"
#include "RaceType/MainRace.h"
#include "RaceType/GroundRace.h"
#include "RaceType/AirRace.h"
#include "RaceType/MixedRace.h"


int main() {
    // add all transports
    transport::Transport** allTransports = Factory::createTransportArray();

    while (true) {
        
        std::cout << "\n1. Ground race only\n";
        std::cout << "2. Air race only\n";
        std::cout << "3. Mixed race\n";
        std::cout << "0. Exit\n";
        std::cout << "Select race type: ";

        int raceType;
        std::cin >> raceType;
        if (raceType == 0) { break; }
        else if (raceType > 3 || raceType < 0) {
            std::cout << "Invalid race type!\n";
            continue;
        }
        
        double distance;
        while (true) 
        {
            std::cout << "Enter race distance (Max race distance: 99999): ";
            std::cin >> distance;

            if (distance < 1)
            {
                std::cout << "A race cannot have a negative distance! Try again!\n\n";
            }
            else if (distance > 99999)
            {
                std::cout << "Incorrect value!Try again!\n\n";
            }
            else
            {
                break;
            }
        }
     
        race::Race* racePtr = nullptr;
        switch (raceType) {
        case 1: racePtr = new race::GroundRace(distance); break;
        case 2: racePtr = new race::AirRace(distance); break;
        case 3: racePtr = new race::MixedRace(distance); break;
        }

        // registration
        transport::Transport* registered[8];
        int regCount{ 0 };
        while (true) {
            std::cout << std::endl;
            for (int i = 0; i < Factory::TOTAL_TRANSPORTS; ++i)
            {
                std::cout << i + 1 << ". " << allTransports[i]->getName() << "\n";
            }
            std::cout << "Select transport to register (0 = start race): ";


            //check of two participants
            int choice;
            std::cin >> choice;
            if (choice == 0 && regCount < 2) {
                std::cout << "At least 2 transports must participate!\n";
                continue;
            }
            else if (choice < 0 || choice > Factory::TOTAL_TRANSPORTS)
            {
                std::cout << "Invalid selection!\n";
                continue;
            }
            else if (choice == 0 && regCount >= 2) { break; }

            transport::Transport* t = allTransports[choice - 1];

            // transport check
            if ((raceType == 1 && t->getType() == transport::TransportType::Air) ||
                (raceType == 2 && t->getType() == transport::TransportType::Ground)) {
                std::cout << "This transport cannot participate in this race.\n";
                continue;
            }

            // repetition chech
            bool already = false;
            for (int i{ 0 }; i < regCount; ++i)
                if (registered[i]->getName() == t->getName())
                    already = true;

            if (already) {
                std::cout << "Transport already registered.\n";
                continue;
            }

            registered[regCount++] = t;
            std::cout << t->getName() << " registered.\n";
        }

        

        // add participant
        for (int i = 0; i < regCount; ++i)
            racePtr->registerTransport(registered[i]);

        // strt race and result
        race::Result results[10];
        int count = racePtr->startRace(results);

        std::cout << "\nRace results:\n";
        for (int i = 0; i < count; ++i)
            std::cout << i + 1 << ". " << results[i].name << " - " << results[i].time << " hours\n";

        delete racePtr;

        std::cout << "\nRun another race? (1 = Yes, 0 = No): ";
        int again;
        std::cin >> again;
        if (again == 0) break;
    }

    // delete memory
    Factory::deleteTransportArray(allTransports);

    std::cout << "Goodbye!\n";
    return 0;
}