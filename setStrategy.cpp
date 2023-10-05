//
// Created by lenovo on 10/5/2023.
//

#include "setStrategy.h"
#include "AppData.h"
#include <iostream>

using namespace std;

setStrategy::setStrategy(AppData *strategy) {
    this->strategy = strategy;
}

void setStrategy::readData() {
    //cout << strategy;
    strategy->readPacket();

}

void setStrategy::writeData() {
    strategy->readPacket();
}