//
// Created by Marwan on 10/5/2023.
//

#ifndef OOP_ETHERNETPACKET_H
#define OOP_ETHERNETPACKET_H



#include "unordered_map"
#include <string>
#include <vector>
using namespace std;

class EthernetPacket {

protected:
  string destinationAddress;
  string sourceAddress;
  string CRC;
  string type;
  string packet;

public:
  EthernetPacket(string dataPacket);

  // Pure virtual function to parse the packet fields
  virtual void parse() = 0;
  string getDestinationAddress();
  string getSourceAddress();
  string getCRC();
  string getType();
  string getPcaket();
};

#endif // OOP_ETHERNETPACKET_H
