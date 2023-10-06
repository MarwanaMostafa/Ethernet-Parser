
//
// Created by Marwan on 10/5/2023.
//
#include "EthernetPacket.h"
#include <iostream>
using namespace std;
EthernetPacket::EthernetPacket(string dataPacket) {
  this->packet = dataPacket;
  this->CRC = "";
  this->destinationAddress = "";
  this->sourceAddress = "";
  this->type = "";
}
string EthernetPacket::getDestinationAddress() { return this->destinationAddress; }
string EthernetPacket::getSourceAddress() { return this->sourceAddress; }
string EthernetPacket::getPcaket() { return this->packet; }
string EthernetPacket::getCRC() { return this->CRC; }
string EthernetPacket::getType() { return this->type; }
void EthernetPacket::parse() {
  const int preambleLength = 16;
  const int destinationAddressLength = 12;
  const int sourceAddressLength = 12;
  const int typeLength = 4;
  const int crcLength = 8;

  const int startingDestinationAddress = preambleLength;
  const int startingSourceAddress = startingDestinationAddress + destinationAddressLength;
  const int startingType = startingSourceAddress + sourceAddressLength;

  this->destinationAddress = this->packet.substr(startingDestinationAddress, destinationAddressLength);
  this->sourceAddress = this->packet.substr(startingSourceAddress, sourceAddressLength);
  this->type = this->packet.substr(startingType, typeLength);
  this->CRC = this->packet.substr(packet.length() - crcLength);
}
