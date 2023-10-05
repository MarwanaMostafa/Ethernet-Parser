//
// Created by lenovo on 10/5/2023.
//

#include "FilePacketData.h"
//
// Created by lenovo on 10/5/2023.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void FilePacketData::readPacket()  {
    ifstream inputFile;
    inputFile.open("input_packets.txt");

    if (!inputFile) {
        cerr << "Error opening the input file." << endl;
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        cout << "Read from file: " << line << endl;
    }

    inputFile.close();
}

/*string FilePacketData::getData() const {
    return data;
}*/