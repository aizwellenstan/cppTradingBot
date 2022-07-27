/*!
    \file function.cpp
    \brief Template function implementation
    \author Ivan Shynkarenka
    \date 26.05.2016
    \copyright MIT License
*/

#include "template/function.h"

#include <cstdlib>

namespace TradingBot {

int function(int parameter)
{
    return rand() % parameter;
}

} // namespace TradingBot
