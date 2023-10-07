//
// Created by karim on 10/6/2023.
//

#include "EthernetPacketFactoryImpl.h"
#include "../Packets/EthernetPacket.h"
#include "../Packets/ECpriPacket.h"
#include "../Packets/RowEthernetPacket.h"
#include <iostream>

EthernetPacket* EthernetPacketFactoryImpl::createPacket(string packetString) {
    string subString = packetString.substr(40, 4);
    EthernetPacket *packet;
    if(subString == "AEFE")
        packet = new ECpriPacket(packetString);
    else
        packet = new RowEthernetPacket(packetString);

    return packet;
}