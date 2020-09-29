# gtest_conan
This is a simple repo that demonstrates Gtest integration with Conan in C++.

## Prerequisites
```console
$ pip3 install conan
```

## Running the Example
```console
$ mkdir build && cd build
$ conan install ..
$ cmake ..
$ cmake --build . -- -j
$ ctest
```