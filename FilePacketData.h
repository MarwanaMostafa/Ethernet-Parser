//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_FILEPACKETDATA_H
#define ETHERNET_PARSER_FILEPACKETDATA_H

#include "PacketData.h"

#include <iostream>
#include <string>


class FilePacketData : public PacketData {
public:
    void readPacket() ;
    virtual void writePacket() = 0;
    std::string getData () const;

private:
    std::string packetData;
};


#endif //ETHERNET_PARSER_FILEPACKETDATA_H
