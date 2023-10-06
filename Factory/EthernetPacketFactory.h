//
// Created by karim on 10/6/2023.
//

#ifndef ETHERNET_PARSER_ETHERNETPACKETFACTORY_H
#define ETHERNET_PARSER_ETHERNETPACKETFACTORY_H

#include <string>
#include "../Packets/EthernetPacket.h"

using namespace std;


class EthernetPacketFactory {
public:
    virtual EthernetPacket* createPacket(string packet) = 0;
};


#endif //ETHERNET_PARSER_ETHERNETPACKETFACTORY_H
