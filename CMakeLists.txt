cmake_minimum_required(VERSION 3.8)
project(EXPERIMENTS)

add_executable(test.out main.cpp src/constants.cpp src/aes.cpp examples/crypto.cpp)

target_link_libraries(test.out)