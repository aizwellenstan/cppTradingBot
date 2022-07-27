# TradingBot

[![Linux (clang)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-linux-clang.yml/badge.svg)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-linux-clang.yml)
[![Linux (gcc)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-linux-gcc.yml/badge.svg)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-linux-gcc.yml)
<br/>
[![MacOS](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-macos.yml/badge.svg)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-macos.yml)
<br/>
[![Windows (Cygwin)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-cygwin.yml/badge.svg)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-cygwin.yml)
[![Windows (MSYS2)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-msys2.yml/badge.svg)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-msys2.yml)
[![Windows (MinGW)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-mingw.yml/badge.svg)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-mingw.yml)
[![Windows (Visual Studio)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-vs.yml/badge.svg)](can be find on GitHub: https://github.com/aizwellenstan/cppTradingBotdingBot/actions/workflows/build-windows-vs.yml)

C++ Template Library contains initial templates for a new C++ library project.

[TradingBot API reference](https://chronoxor.github.io/TradingBot/index.html)

# Contents
  * [Features](#features)
  * [Requirements](#requirements)
  * [How to build?](#how-to-build)

# Features
* Cross platform (Linux, MacOS, Windows)
* Benchmarks
* Examples
* Tests
* [Doxygen](http://www.doxygen.org) API documentation
* Continuous integration ([Travis CI](https://travis-ci.com), [AppVeyor](https://www.appveyor.com))

# Requirements
* Linux
* MacOS
* Windows
* [cmake](https://www.cmake.org)
* [gcc](https://gcc.gnu.org)
* [git](https://git-scm.com)
* [gil](https://github.com/chronoxor/gil.git)
* [python3](https://www.python.org)

Optional:
* [clang](https://clang.llvm.org)
* [CLion](https://www.jetbrains.com/clion)
* [Cygwin](https://cygwin.com)
* [MSYS2](https://www.msys2.org)
* [MinGW](https://mingw-w64.org/doku.php)
* [Visual Studio](https://www.visualstudio.com)

# How to build?

### Install [gil (git links) tool](https://github.com/chronoxor/gil)
```shell
pip3 install gil
```

### Setup repository
```shell
git clone https://github.com/aizwellenstan/cppTradingBot.git
cd TradingBot
gil update
```

### Linux
```shell
cd build
./unix.sh
```

### MacOS
```shell
cd build
./unix.sh
```

### Windows (Cygwin)
```shell
cd build
unix.bat
```

### Windows (MSYS2)
```shell
cd build
unix.bat
```

### Windows (MinGW)
```shell
cd build
mingw.bat
```

### Windows (Visual Studio)
```shell
cd build
vs.bat
```
