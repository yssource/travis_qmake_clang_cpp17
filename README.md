# travis_qmake_clang_cpp17

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp17.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp17)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp17.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp17)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `clang`, trunk version. For using the most recent `clang` package (which allows `c++1z`, see [travis_qmake_clang_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp14)
 * C++ version: `C++17`
 * Libraries: `STL` only
 * Code coverage: none
 * Source: one single file, `main.cpp`

More complex builds:

 * Add libFuzzer: [travis_qmake_clang_cpp17_libfuzzer](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp17_libfuzzer)

Equally complex builds:

 * [none]

Less complex builds:

 * Use of C++98: [travis_qmake_clang_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp98)
 * Use of C++11: [travis_qmake_clang_cpp11](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp11)
 * Use of C++14: [travis_qmake_clang_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp14)

## Most recent package or trunk?

The trunk is the most recent (and thus unstable) `clang` version. This repository shows how to install and use it.

The most recent `clang` package available is used in this example: [travis_qmake_clang_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp14)

Both versions can successfully compile the code in this example. 

