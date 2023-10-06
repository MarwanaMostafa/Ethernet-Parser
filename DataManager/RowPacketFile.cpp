//
// Created by Marwan on 10/6/2023.
//

#include "RowPacketFile.h"
#include "../Packets/RowEthernetPacket.h"
#include "../Packets/EthernetPacket.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void RowPacketFile ::writePacket(EthernetPacket *ethernetPacket) {

  ofstream outputFile("output.txt");
  RowEthernetPacket *ecpriPacket = dynamic_cast<RowEthernetPacket *>(ethernetPacket);

  if (!outputFile.is_open()) {
    cerr << "Error opening the output file." << endl;
    return;
  }
  outputFile << "Packet # " << packetCounter << endl;
  outputFile << ecpriPacket->getPcaket() << endl;
  outputFile << "CRC: " << ecpriPacket->getCRC() << endl;
  outputFile << "Destination Address: " << ecpriPacket->getDestinationAddress()
             << endl;

  outputFile << "Source Address: " << ecpriPacket->getSourceAddress() << endl;
  outputFile << "Type: " << ecpriPacket->getType() << endl;
  outputFile << "**********************************" << endl;
  packetCounter++;
  outputFile.close();
}
