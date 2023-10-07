//
// Created by Marwan on 10/6/2023.
//

#include "ECpriPacketFile.h"
#include "../Packets/ECpriPacket.h"
#include "../Packets/EthernetPacket.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void ECpriPacketFile ::writePacket(EthernetPacket *ethernetPacket) {

  ofstream outputFile("output.txt", ios::app);
  ECpriPacket *ecpriPacket = dynamic_cast<ECpriPacket *>(ethernetPacket);

  if (!outputFile.is_open()) {
    cerr << "Error opening the output file." << endl;
    return;
  }
  outputFile << "Packet # " << packetCounter << endl;
  outputFile << ecpriPacket->getPacket() << endl;
  outputFile << "CRC: " << ecpriPacket->getCRC() << endl;

  outputFile << "Concatenation Indicator: "
             << ecpriPacket->getConcatenationIndicator() << endl;
  outputFile << "Destination Address: " << ecpriPacket->getDestinationAddress()
             << endl;

  outputFile << "Message Type: " << ecpriPacket->getMessageType() << endl;
  outputFile << "Payload Size " << ecpriPacket->getPayloadSize() << endl;
  outputFile << "Protocol Version: " << ecpriPacket->getProtocolVersion()
             << endl;

  outputFile << "RTC ID: " << ecpriPacket->getRTCID() << endl;
  outputFile << "Sequence ID: " << ecpriPacket->getSequenceID() << endl;
  outputFile << "Source Address: " << ecpriPacket->getSourceAddress() << endl;
  outputFile << "Type: " << ecpriPacket->getType() << endl;
  outputFile << "**********************************" << endl;
  packetCounter++;
}
