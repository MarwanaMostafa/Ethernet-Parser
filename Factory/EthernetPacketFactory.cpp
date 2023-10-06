//
// Created by karim on 10/6/2023.
//

#include "EthernetPacketFactory.h"
#include <string>
#include "../Packets/EthernetPacket.h"
#include "../Packets/ECpriPacket.h"
#include "../Packets/RowEthernetPacket.h"

using namespace std;

EthernetPacket* EthernetPacketFactory::createPacket(string packetString) {
    string subString = packetString.substr(40, 4);
    EthernetPacket *packet;
    if(subString == "AEFE")
         packet = new ECpriPacket(packetString);
    else
         packet = new RowEthernetPacket(packetString);

    return packet;
}
