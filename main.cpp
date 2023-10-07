#include "DataManager/ECpriPacketFile.h"
#include "Packets/ECpriPacket.h"
#include "Packets/EthernetPacket.h"
#include "Packets/RowEthernetPacket.h"
#include "DataManager/RowPacketFile.h"
#include "Factory/EthernetPacketFactory.h"
#include "Factory/EthernetPacketFactoryImpl.h"
#include <iostream>

using namespace std;

int main() {
    PacketData *reader = new ECpriPacketFile();
    EthernetPacketFactory *factory = new EthernetPacketFactoryImpl();
    reader->readPacket();
    vector<string> data = reader->getData();

    for (const string& packetString : data) {
        EthernetPacket* packet = factory->createPacket(packetString);
        packet->parse();

        delete packet;
    }

    delete reader;
    delete factory;

  return 0;
}