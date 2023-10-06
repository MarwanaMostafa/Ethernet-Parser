//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_FILEPACKETDATA_H
#define ETHERNET_PARSER_FILEPACKETDATA_H

#include "PacketData.h"

#include <iostream>
#include <string>
#include "../Packets/EthernetPacket.h"
using namespace std;
class FilePacketData : public PacketData {
public:
    void readPacket() ;
    virtual void writePacket(EthernetPacket* ethernetPacket) = 0;
    std::vector<string> getData () const;

};


#endif //ETHERNET_PARSER_FILEPACKETDATA_H
