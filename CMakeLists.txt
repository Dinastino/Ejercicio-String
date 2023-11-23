cmake_minimum_required(VERSION 3.26)
project(Strings)

set(CMAKE_CXX_STANDARD 17)

add_executable(Strings ejercicios/main.cpp
        ejercicios/Ej2_Clasestring.cpp
        ejercicios/Ej3_CONCAT.cpp
        ejercicios/Ej4_SubCadenas.cpp
        "ejercicios/Ej5_substr().cpp")
