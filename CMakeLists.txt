cmake_minimum_required(VERSION 3.20)

project(lab3_zal)



add_executable(main main.cpp Figury.h)

target_include_directories(main PUBLIC include)
set_target_properties(main PROPERTIES
    CXX_STANDARD 23
)

#[[
add_executable(zal test.cpp)

target_include_directories(zal PUBLIC include)
set_target_properties(zal PROPERTIES
    CXX_STANDARD 23
)

]]
