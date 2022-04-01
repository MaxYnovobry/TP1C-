cmake_minimum_required(VERSION 3.21)
project(TP1C_)

set(CMAKE_CXX_STANDARD 14)

include_directories(Header)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "Source/*.cpp" "Header/*.h" "main.cpp")
add_executable(TP1 ${SOURCES} Header/Menu.h Source/Menu.cpp Source/Exercice5.cpp Header/Exercice5.h Header/Gestion_Erreur.h Source/Gestion_Erreur.cpp)

