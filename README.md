$ mkdir build && cd build
$ conan install ..
$ cmake ..
$ cmake --build . -- -j
$ ctest
$ cmake --build . --config Release
