cmake_minimum_required(VERSION 3.10)

project("TBDI2D" VERSION 0.1)



set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(SFML_STATIC_LIBRARIES TRUE)
set(CMAKE_CXX_FLAGS "-std=c++20")

add_library(win STATIC ./source/classes/win/win.cpp)
add_library(set STATIC ./source/classes/set/set.cpp)
add_library(men STATIC ./source/classes/menu/menu.cpp)
add_library(btn STATIC ./source/classes/button/button.cpp)
add_library(int STATIC ./source/classes/intro/intro.cpp)
add_library(cont STATIC ./source/classes/context/context.cpp)

add_executable(TBDI2D source/main.cpp)
set(SFML_DIR SFML-2.5.1/lib/cmake/SFML)
target_include_directories(TBDI2D PUBLIC include)

target_sources(TBDI2D PRIVATE TBDI2D.rc)


find_package(SFML 2.5 COMPONENTS audio graphics window system REQUIRED)
target_link_libraries(cont sfml-audio sfml-graphics sfml-system btn)
target_link_libraries(int sfml-audio sfml-graphics sfml-system)
target_link_libraries(men sfml-audio sfml-graphics sfml-system btn cont)
target_link_libraries(win sfml-audio sfml-graphics sfml-system men set int)
target_link_libraries(TBDI2D win)

