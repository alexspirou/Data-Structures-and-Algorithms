cmake_minimum_required(VERSION 3.1) #Version of cmake that we use

#Name of project
project(de_queue)

#Set variable to our src folder
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")



set(SOURCES)
list(APPEND SOURCES
    "${SRC_DIR}/main.cpp"
    "${SRC_DIR}/DEQueue.h"		
)
#Executable definitions

#Makes the src folder executable
add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "${SRC_DIR}")
#Let cmake knows that we're using C++ 11
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)

