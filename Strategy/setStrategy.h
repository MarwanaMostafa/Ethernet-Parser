//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_SETSTRATEGY_H
#define ETHERNET_PARSER_SETSTRATEGY_H

#include "../DataManager/PacketData.h"

class setStrategy {
private:
    PacketData* strategy;

public:
    setStrategy(PacketData* strategy);
    void readData();
    void writeData(unordered_map<string,string>& data);
    PacketData* getStrategy();
};


#endif //ETHERNET_PARSER_SETSTRATEGY_H