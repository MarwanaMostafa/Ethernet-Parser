//
// Created by Marwan on 10/6/2023.
//

#ifndef LASTVERSIONN_ROWPACKETFILE_H
#define LASTVERSIONN_ROWPACKETFILE_H
#include "FilePacketData.h"

class RowPacketFile : public FilePacketData {
public:
  void writePacket(EthernetPacket *ethernetPacket) override;
};
#endif // LASTVERSIONN_ROWPACKETFILE_H
