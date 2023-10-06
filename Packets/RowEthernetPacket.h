//
// Created by Marwan on 10/5/2023.
//

#ifndef OOP_ROWETHERNETPACKET_H
#define OOP_ROWETHERNETPACKET_H

#include "EthernetPacket.h"

class RowEthernetPacket : public EthernetPacket {
public:
  RowEthernetPacket(string dataPacket);
  void parse() override;
};
#endif // OOP_ROWETHERNETPACKET_H
