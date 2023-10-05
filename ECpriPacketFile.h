//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_ECPRIPACKETFILE_H
#define ETHERNET_PARSER_ECPRIPACKETFILE_H

#include "FilePacketData.h"

class ECpriPacketFile:public FilePacketData {
public:
    void writePacket();
};


#endif //ETHERNET_PARSER_ECPRIPACKETFILE_H
