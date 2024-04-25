cmake_minimum_required(VERSION 3.10)

project(main)

aux_source_directory(. SRC_SUB)

set(SRC_SUB ${SRC_SUB} tcpServer.cpp)

add_executable(main ${SRC_SUB})