cmake_minimum_required(VERSION 3.29)
project(OOPD_PA_2_Korotych)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOPD_PA_2_Korotych main.cpp
        Board.cpp
        Board.h
        CanvasController.cpp
        CanvasController.h
        Figures/Figure.cpp
        Figures/Figure.h
        Storage.cpp
        Storage.h
        Figures/Triangle.cpp
        Figures/Triangle.h
        CLI.cpp
        CLI.h
        Figures/Square.cpp
        Figures/Square.h
        Figures/Circle.cpp
        Figures/Circle.h
        Figures/Rectangle.cpp
        Figures/Rectangle.h)
