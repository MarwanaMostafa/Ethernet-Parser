//
// Created by Marwan on 10/5/2023.
//
#include "RowEthernetPacket.h"
#include "../DataManager/RowPacketFile.h"
#include <string>
RowEthernetPacket::RowEthernetPacket(string dataPacket)
    : EthernetPacket(dataPacket) {}
void RowEthernetPacket::parse() {
  EthernetPacket::parse();
  RowPacketFile writer;
  writer.writePacket(this);
}