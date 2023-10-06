//
// Created by Marwan on 10/5/2023.
//

#include "ECpriPacket.h"
#include "../DataManager/ECpriPacketFile.h"
#include <iostream>
#include <string>
using namespace std;
ECpriPacket::ECpriPacket(string dataPacket) : EthernetPacket(dataPacket) {}
string ECpriPacket::getConcatenationIndicator() {
  return this->concatenationIndicator;
}
string ECpriPacket::getMessageType() { return this->messageType; }
string ECpriPacket::getPayloadSize() { return this->payloadSize; }
string ECpriPacket::getProtocolVersion() { return this->protocolVersion; }
string ECpriPacket::getRTCID() { return this->RTCID; }
string ECpriPacket::getSequenceID() { return this->sequenceID; }
void ECpriPacket::parse() {
  EthernetPacket::parse();

  const int preambleLength = 16;
  const int destinationAddressLength = 12;
  const int sourceAddressLength = 12;
  const int typeLength = 4;
  const int crcLength = 8;

  const int protocolVersionLength = 1;
  const int concatenationIndicatorLength = 1;
  const int messageTypeLength = 2;
  const int payloadSizeLength = 4;
  const int rtcIdLength = 4;
  const int sequenceIdLength = 4;

  const int startingProtocolVersion = preambleLength +
                                      destinationAddressLength +
                                      sourceAddressLength + typeLength;
  const int startingConcatenationIndicator =
      startingProtocolVersion + protocolVersionLength;
  const int startingMessageType =
      startingConcatenationIndicator + concatenationIndicatorLength;
  const int startingPayloadSizen = startingMessageType + messageTypeLength;
  const int startingRTCID = startingPayloadSizen + payloadSizeLength;
  const int startingSequenceID = startingRTCID + rtcIdLength;

  // Parse and store various fields
  this->protocolVersion =
      this->packet.substr(startingProtocolVersion, protocolVersionLength);

  this->concatenationIndicator = this->packet.substr(
      startingConcatenationIndicator, concatenationIndicatorLength);

  this->messageType =
      this->packet.substr(startingMessageType, messageTypeLength);

  this->payloadSize =
      this->packet.substr(startingPayloadSizen, payloadSizeLength);

  this->RTCID = this->packet.substr(startingRTCID, rtcIdLength);

  this->sequenceID = this->packet.substr(startingSequenceID, sequenceIdLength);


  ECpriPacketFile writer;
  writer.writePacket(this);
}
