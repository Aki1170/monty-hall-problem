cmake_minimum_required(VERSION 3.16)

project(monty-hall-problem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(montyhall
    montyhall_main.cpp

    player.cpp
    player.h

    stubborn_player.cpp
    stubborn_player.h

    switching_player.cpp
    switching_player.h

    host.cpp
    host.h

    simulation.cpp
    simulation.h
    probabilistic_player.h
    probabilistic_player.cpp
)

include(GNUInstallDirs)
install(TARGETS montyhall
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
