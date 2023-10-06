//
// Created by Marwan on 10/6/2023.
//

#ifndef LASTVERSIONN_ECPRIPACKETFILE_H
#define LASTVERSIONN_ECPRIPACKETFILE_H
#include "FilePacketData.h"
class ECpriPacketFile : public FilePacketData {
public:
  void writePacket(EthernetPacket *ethernetPacket) override;
};

#endif // LASTVERSIONN_ECPRIPACKETFILE_H
