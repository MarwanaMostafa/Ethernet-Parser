//
// Created by lenovo on 10/5/2023.
//

#include "EthernetPacketFileWriter.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void EthernetPacketFileWriter::writePacket(unordered_map<string,string>& data) {
    ofstream outputFile("output.txt");

    if (!outputFile.is_open()) {
        cerr << "Error opening the output file." << endl;
        return;
    }

    for (const auto& entry : data) {
        outputFile << entry.first << ": " << entry.second << endl;
    }

    outputFile.close();
}
