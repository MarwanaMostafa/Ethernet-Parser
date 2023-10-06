//
// Created by lenovo on 10/5/2023.
//

#include "setStrategy.h"
#include "PacketData.h"
#include <iostream>

using namespace std;

setStrategy::setStrategy(PacketData *strategy) {
    this->strategy = strategy;
}

PacketData* setStrategy::getStrategy() {
    return this->strategy;
}

void setStrategy::readData() {
    strategy->readPacket();
}

void setStrategy::writeData() {
    strategy->readPacket();
}