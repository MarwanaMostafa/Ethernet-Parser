//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_ROWETHERNETPACKETFILE_H
#define ETHERNET_PARSER_ROWETHERNETPACKETFILE_H

#include "FilePacketData.h"

class RowEthernetPacketFile : public FilePacketData{
public:
    void writePacket();
};


#endif //ETHERNET_PARSER_ROWETHERNETPACKETFILE_H
