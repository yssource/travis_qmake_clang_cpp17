# travis_qmake_clang_cpp14

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `clang`
 * C++ version: `C++14`
 * Libraries: `STL` only
 * Code coverage: none
 * Source: one single file, `main.cpp`

More complex builds:

 * Add GCC: [travis_qmake_clang_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_gcc_cpp14)
 * Use of C++17: [travis_qmake_clang_cpp17](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp17)

Equally complex builds:

 * Replace clang by GCC: [travis_qmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14)


Less complex builds:

 * Use of C++98: [travis_qmake_clang_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp98)
 * Use of C++11: [travis_qmake_clang_cpp11](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp11)
 * No `qmake`: [travis_clang_cpp14](https://www.github.com/richelbilderbeek/travis_clang_cpp14)

## Troubleshooting

### `undefined reference to 'std::__1::cout'`

Cause:


```
make
```

Error message:

```
clang++ -c -m64 -pipe -Wall -Wextra -Weffc++ -Werror -std=c++14 -stdlib=libc++ -O2 -Wall -W -D_REENTRANT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -o main.o main.cpp
clang++ -m64 -Wl,-O1 -o travis_qmake_clang_cpp14 main.o    -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
```

The compiling is done with `-stdlib=libc++`, the linking is done without.

Solution:

Add to the `.pro` file:

```
QMAKE_LFLAGS += -stdlib=libc++
```
