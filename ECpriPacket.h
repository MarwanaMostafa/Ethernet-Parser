//
// Created by Marwan on 10/5/2023.
//

#ifndef OOP_ECPRIPACKET_H
#define OOP_ECPRIPACKET_H


#include "EthernetPacket.h"

using namespace std;
class ECpriPacket : public EthernetPacket {
private:
  string concatenationIndicator;
  string messageType;
  string payloadSize;
  string protocolVersion;
  string RTCID;
  string sequenceID;

public:
  ECpriPacket(string dataPacket);
  void parse();
  string getConcatenationIndicator();
  string getMessageType();
  string getPayloadSize();
  string getProtocolVersion();
  string getRTCID();
  string getSequenceID();
  // Override parse and writeToFile methods if necessary
};

#endif // OOP_ECPRIPACKET_H
