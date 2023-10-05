//
// Created by lenovo on 10/5/2023.
//

#include "FilePacketData.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void FilePacketData::readPacket()  {
    ifstream inputFile("F:\\Ethernet-Parser\\input_packets");

    if (!inputFile) {
        cerr << "Error opening the input file" << endl;
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        packetData += line;
        packetData+='\n';
    }
    inputFile.close();
}

string FilePacketData::getData(){
    return packetData;
}