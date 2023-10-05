//
// Created by lenovo on 10/5/2023.
//

#ifndef ETHERNET_PARSER_DBPACKETDATA_H
#define ETHERNET_PARSER_DBPACKETDATA_H

#include "AppData.h"

class DBPacketData : public AppData{
    void readPacket() ;
    virtual void writePacket() = 0;
};


#endif //ETHERNET_PARSER_DBPACKETDATA_H
