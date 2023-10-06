//
// Created by karim on 10/6/2023.
//

#ifndef ETHERNET_PARSER_ETHERNETPACKETFACTORYIMPL_H
#define ETHERNET_PARSER_ETHERNETPACKETFACTORYIMPL_H

#include "EthernetPacketFactory.h"
#include "../Packets/EthernetPacket.h"

class EthernetPacketFactoryImpl : public EthernetPacketFactory {
public:
    EthernetPacket* createPacket(string packet) override;
};

#endif //ETHERNET_PARSER_ETHERNETPACKETFACTORYIMPL_H
