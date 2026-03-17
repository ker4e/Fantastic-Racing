#include "TransportArr.h"

transport::Transport** Factory::createTransportArray() {
    transport::Transport** arr = new transport::Transport * [TOTAL_TRANSPORTS];

    arr[0] = new camel::Camel();
    arr[1] = new fastCamel::FastCamel();
    arr[2] = new centaur::Centaur();
    arr[3] = new allTerrainBoots::AllTerrainBoots();
    arr[4] = new magicCarpet::MagicCarpet();
    arr[5] = new eagle::Eagle();
    arr[6] = new broom::Broom();

    return arr;
}

void Factory::deleteTransportArray(transport::Transport** arr) {
    for (int i = 0; i < TOTAL_TRANSPORTS; ++i) {
        delete arr[i];
    }
    delete[] arr;
}