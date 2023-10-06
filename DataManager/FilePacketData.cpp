//
// Created by lenovo on 10/5/2023.
//

#include "FilePacketData.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void FilePacketData::readPacket()  {
    ifstream inputFile("../input_packets");

    if (!inputFile) {
        cerr << "Error opening the input file" << endl;
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        fileData.push_back(line);
    }
    inputFile.close();
}

vector<string> FilePacketData::getData()const{
    return fileData;
}