//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_ETHERNETPACKETFILEWRITER_H
#define ETHERNET_PARSER_ETHERNETPACKETFILEWRITER_H

#include "FilePacketData.h"

class EthernetPacketFileWriter : public FilePacketData{
public:
    void writePacket();
};


#endif //ETHERNET_PARSER_ETHERNETPACKETFILEWRITER_H
