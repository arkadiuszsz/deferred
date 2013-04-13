cmake_minimum_required(VERSION 2.8)

set(DEFERRED_DIR src/deferred)
set(EXEMPLE_DIR src/exemple)
set(EXEMPLE1_SRC ${EXEMPLE_DIR}/exemple1.cpp)
set(EXEMPLE2_SRC ${EXEMPLE_DIR}/exemple2.cpp)

include_directories(src/deferred)
add_definitions(-std=c++0x)
add_executable(exemple1 ${EXEMPLE1_SRC})
add_executable(exemple2 ${EXEMPLE2_SRC})