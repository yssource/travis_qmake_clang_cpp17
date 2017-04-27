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

### Most recent `clang` package available

This is `clang` 3.8 (as of 2017-04-27).

Use the following `install` part in `travis.yml`:

```
language: cpp
dist: trusty
sudo: required
compiler: clang

env: COMPILER_NAME=clang CXX=clang++-3.8 CC=clang-3.8
addons:
  apt:
    packages:
      - clang-3.8
    sources: *sources

install: 
  # clang, version 3.8
  - sudo update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-3.8 90
  - sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-3.8 90
  # STL
  - sudo apt-get install -y libc++-dev libc++abi-dev
```

### trunk

Use the following `install` part in `travis.yml`:

```
install: 
  # clang, trunk, from http://llvm.org/docs/LibFuzzer.html#id14
  - mkdir TMP_CLANG
  - cd TMP_CLANG
  - git clone https://chromium.googlesource.com/chromium/src/tools/clang
  - cd ..
  - TMP_CLANG/clang/scripts/update.py
  - ln -s ./third_party/llvm-build/Release+Asserts/bin/clang
  - ln -s ./third_party/llvm-build/Release+Asserts/bin/clang++
  # STL
  - sudo apt-get install -y libc++-dev libc++abi-dev
```

## Troubleshooting

