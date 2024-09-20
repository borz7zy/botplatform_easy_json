cmake_minimum_required(VERSION 3.10)
project(easy_json)

set(CMAKE_CXX_STANDARD 14)

set(LIBRARY_VERSION 1.0)

set(DL ${CMAKE_CURRENT_SOURCE_DIR}/libs)
set(TPL ${DL}/third_party)
set(NLOHMANN_DIR ${TPL}/nlohmannjson)

add_library(easy_json STATIC easy_json.cpp)

include_directories(${NLOHMANN_DIR}/single_include/nlohmann)

target_include_directories(easy_json PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)