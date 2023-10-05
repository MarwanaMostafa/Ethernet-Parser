//
// Created by lenovo on 10/4/2023.
//

#ifndef ETHERNET_PARSER_APPDATA_H
#define ETHERNET_PARSER_APPDATA_H


class AppData {
public:
    virtual void readPacket()=0;
    virtual void writePacket() = 0;
};


#endif //ETHERNET_PARSER_APPDATA_H
