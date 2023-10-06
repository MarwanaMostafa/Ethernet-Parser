cmake_minimum_required(VERSION 3.0)
project(Ethernet_Parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ethernet_Parser
        Packets/EthernetPacket.cpp
        main.cpp
        DataManager/PacketData.cpp
        DataManager/FilePacketData.cpp
        DataManager/RowPacketFile.cpp
        DataManager/ECpriPacketFile.cpp
        Packets/ECpriPacket.cpp
        Packets/RowEthernetPacket.cpp
        Factory/EthernetPacketFactory.cpp
)