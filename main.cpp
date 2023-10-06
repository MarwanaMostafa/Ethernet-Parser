#include <iostream>
#include "EthernetPacket.h"
#include "ECpriPacket.h"
#include "setStrategy.h"
#include "EthernetPacketFileWriter.h"

using namespace std;

int main() {
    setStrategy packet(new EthernetPacketFileWriter());
    packet.readData();


    EthernetPacket *obj1 = new ECpriPacket(packet.getStrategy()->getData());
    obj1->parse();// Use obj1 as needed

    // Don't forget to delete obj1 when you're done with it
    delete obj1;

    return 0;
}