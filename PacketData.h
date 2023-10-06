//
// Created by lenovo on 10/4/2023.
//

#ifndef ETHERNET_PARSER_PACKETDATA_H
#define ETHERNET_PARSER_PACKETDATA_H

#include <string>

class PacketData {
public:
    virtual void readPacket()=0;
    virtual void writePacket() = 0;
    virtual std::string getData() const=0;
};


#endif //ETHERNET_PARSER_PACKETDATA_H
