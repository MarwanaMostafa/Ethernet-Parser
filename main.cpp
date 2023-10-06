#include "DataManager/ECpriPacketFile.h"
#include "Packets/ECpriPacket.h"
#include "Packets/EthernetPacket.h"
#include "Packets/RowEthernetPacket.h"
#include "Strategy/setStrategy.h"
#include "DataManager/RowPacketFile.h"
#include <iostream>
using namespace std;
int main() {
    PacketData *reader = new RowPacketFile();
    reader->readPacket();


    cout<<"Hello";


  return 0;
}