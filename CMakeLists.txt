cmake_minimum_required (VERSION 2.8) 

project(HTTP_Server)

set(SOURCES
	sources/main.cpp
	sources/Handler.cpp
	sources/RequestHandler.cpp
	sources/Server.cpp)

set(HEADERS
	headers/Handler.h
	headers/RequestHandler.h
	headers/Server.h)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(headers)

add_executable (HTTP_Server ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
