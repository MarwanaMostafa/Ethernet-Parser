//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_ETHERNETPACKETFILEWRITER_H
#define ETHERNET_PARSER_ETHERNETPACKETFILEWRITER_H

#include "FilePacketData.h"

#include <unordered_map>
using namespace std;

class EthernetPacketFileWriter : public FilePacketData{
public:
    void writePacket(unordered_map<string,string>& data) override;
};


#endif //ETHERNET_PARSER_ETHERNETPACKETFILEWRITER_H
