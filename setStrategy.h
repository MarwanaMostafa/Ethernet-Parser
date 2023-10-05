//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_SETSTRATEGY_H
#define ETHERNET_PARSER_SETSTRATEGY_H

#include "AppData.h"

class setStrategy {
private:
    AppData* strategy;

public:
    setStrategy(AppData* strategy);
    void readData();
    void writeData();
};


#endif //ETHERNET_PARSER_SETSTRATEGY_H
