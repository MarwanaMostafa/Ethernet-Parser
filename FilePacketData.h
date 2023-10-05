//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_FILEPACKETDATA_H
#define ETHERNET_PARSER_FILEPACKETDATA_H

#include "AppData.h"
#include <iostream>


class FilePacketData : public AppData {
public:
    void readPacket() ;
    virtual void writePacket() = 0;

};


#endif //ETHERNET_PARSER_FILEPACKETDATA_H
