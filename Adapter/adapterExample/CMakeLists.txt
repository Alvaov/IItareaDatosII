cmake_minimum_required(VERSION 3.5)

project(adapterExample LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)

add_executable(adapterExample
  main.cpp
  adapterMP3toWAV.hpp
  adapterMP3toWAV.cpp
  WAVplayer.hpp
  Wavplayer.cpp
  MP3player.hpp
  MP3player.cpp

)
target_link_libraries(adapterExample Qt5::Core)
