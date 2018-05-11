@echo off
mkdir build && cd build
conan install .. -s build_type=Debug -s compiler="Visual Studio" -s compiler.version=15
cmake .. -G "Visual Studio 15 2017 Win64"
cmake --build . --config Debug