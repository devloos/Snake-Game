cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

project(snake)

target_include_directories(${PROJECT_NAME} PUBLIC /include)
add_executable(
    ${PROJECT_NAME} src/main.cpp src/setup.cpp src/draw.cpp src/input.cpp src/logic.cpp
    src/printMenu.cpp src/menuInput.cpp src/inputAi.cpp)

find_library(ncurses ncurses)
target_link_libraries(snake PUBLIC ${ncurses})

# Letting CMake find library
# find_library(${LIB_NAME} ${LIB_TO_FIND} PATHS /tmp/customPath)
# User explicitly finding library
# target_include_directories(${PROJECT_NAME} PUBLIC ${LIB_HEADER_FILES})
# target_link_libraries(${PROJECT_NAME} PUBLIC ${LIB_TO_INCLUDE})
