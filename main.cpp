#include <iostream>
#include "EthernetPacket.h"
#include "ECpriPacket.h"
#include "setStrategy.h"
#include "RowEthernetPacketFile.h"

using namespace std;

int main() {
    setStrategy packet(new RowEthernetPacketFile());
    packet.readData();


    EthernetPacket *obj1 = new ECpriPacket(
            "FB555555555555D50000000000C1ECCD655507D9AEFE1002001480680180900000400101D10000100000FFFE7E040000000000000000000000000000000000000000000099AC762B");
    obj1->parse();
    // Use obj1 as needed

    // Don't forget to delete obj1 when you're done with it
    delete obj1;

    return 0;
}