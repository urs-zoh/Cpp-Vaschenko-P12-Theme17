cmake_minimum_required(VERSION 3.24)
project(homework17)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework17 main.cpp Publication.cpp Publication.h Library.cpp Library.h Book.cpp Book.h Magazine.cpp Magazine.h PublicationException.cpp PublicationException.h)
