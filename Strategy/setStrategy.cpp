//
// Created by lenovo on 10/5/2023.
//

#include "setStrategy.h"
#include "../DataManager/PacketData.h"

#include <iostream>
#include <unordered_map>
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

void setStrategy::writeData(unordered_map<string,string>& data) {
    strategy->writePacket(data);
}