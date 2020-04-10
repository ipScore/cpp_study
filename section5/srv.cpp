// Copyright (c) 2020 by Chrono
//
// g++ srv.cpp -std=c++11 -o a.out;./a.out
// g++ srv.cpp -std=c++14 -o a.out;./a.out
// g++ srv.cpp -std=c++14 -I../common -o a.out;./a.out

//#include <iostream>

#include "cpplang.hpp"
#include "SalesData.hpp"
#include "SpinLock.hpp"
#include "Zmq.hpp"

int main()
{
    using namespace std;

    cout << "c++ version = " << __cplusplus << endl;

    cout << "gcc version = " << __VERSION__ << endl;

    cout << "gcc major = " << __GNUC__ << endl;
    cout << "gcc minor = " << __GNUC_MINOR__ << endl;
    cout << "gcc patch = " << __GNUC_PATCHLEVEL__ << endl;

    cout << "libstdc++ = " << __GLIBCXX__ << endl;
}