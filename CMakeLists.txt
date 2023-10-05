cmake_minimum_required(VERSION 3.0)
project(Ethernet_Parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ethernet_Parser
        EthernetPacket.cpp
        main.cpp
        AppData.cpp
        FilePacketData.cpp
        RowEthernetPacketFile.cpp
        setStrategy.cpp
        ECpriPacketFile.cpp
        ECpriPacket.cpp
        RowEthernetPacket.cpp
        DBPacketData.cpp

        )
