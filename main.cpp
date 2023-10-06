#include <iostream>
#include "Packets/EthernetPacket.h"
#include "Packets/ECpriPacket.h"
#include "Strategy/setStrategy.h"
#include "DataManager/EthernetPacketFile.h"

using namespace std;

int main() {
    setStrategy packet(new EthernetPacketFile());
    packet.readData();
    vector<string> data = packet.getStrategy()->getData();


    //EthernetPacket *obj1 = new ECpriPacket(packet.getStrategy()->getData());
    //obj1->parse();// Use obj1 as needed

    // Don't forget to delete obj1 when you're done with it
    //delete obj1;

    return 0;
}