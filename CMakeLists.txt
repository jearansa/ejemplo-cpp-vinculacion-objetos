cmake_minimum_required(VERSION 3.5)

project(practica0101p01)

set(CMAKE_CXX_STANDARD 14)


add_executable(EjemploVinculacion Empleado.cpp Empleado.h Empresa.cpp Empresa.h Vinculacion.h Vinculacion.cpp Principal_Empresa_Empleado_Objetos.cpp)
