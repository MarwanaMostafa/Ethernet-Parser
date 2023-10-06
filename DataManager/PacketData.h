//
// Created by lenovo on 10/4/2023.
//

#ifndef ETHERNET_PARSER_PACKETDATA_H
#define ETHERNET_PARSER_PACKETDATA_H

#include <string>
#include <unordered_map>

using namespace std;
class PacketData {
protected:
    vector<string> fileData;
public:
    virtual void readPacket()=0;
    virtual void writePacket(unordered_map<string,string>& data) = 0;
    virtual std::vector<string> getData() const=0;
};


#endif //ETHERNET_PARSER_PACKETDATA_H
