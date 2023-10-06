//
// Created by lenovo on 10/4/2023.
//

#ifndef ETHERNET_PARSER_PACKETDATA_H
#define ETHERNET_PARSER_PACKETDATA_H

#include "../Packets/EthernetPacket.h"
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class PacketData {
protected:
  vector<string> fileData;
  static int packetCounter ;
public:
  virtual void readPacket() = 0;
  virtual void writePacket(EthernetPacket *ethernetPacket) = 0;
  virtual std::vector<string> getData() const = 0;
};

#endif // ETHERNET_PARSER_PACKETDATA_H
