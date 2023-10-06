cmake_minimum_required(VERSION 3.0)
project(Ethernet_Parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ethernet_Parser
        EthernetPacket.cpp
        main.cpp
        PacketData.cpp
        FilePacketData.cpp
        EthernetPacketFileWriter.cpp
        setStrategy.cpp
        ECpriPacketFile.cpp
        ECpriPacket.cpp
        RowEthernetPacket.cpp

        )
