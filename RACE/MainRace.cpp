#include "MainRace.h"

race::Race::Race(double distance)
{
    this->distance = distance;
    participantCount = 0;
}

int race::Race::startRace(Result results[])
{
    for (int i = 0; i < participantCount; i++)
    {
        results[i].name = participants[i]->getName();
        results[i].time = participants[i]->calculateTime(distance);
    }

    // сортировка пузырьком
    for (int i = 0; i < participantCount - 1; i++)
    {
        for (int j = 0; j < participantCount - i - 1; j++)
        {
            if (results[j].time > results[j + 1].time)
            {
                Result temp = results[j];
                results[j] = results[j + 1];
                results[j + 1] = temp;
            }
        }
    }

    return participantCount;
}