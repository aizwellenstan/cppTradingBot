/*!
    \file template_function.cpp
    \brief Template function example
    \author Ivan Shynkarenka
    \date 26.05.2016
    \copyright MIT License
*/

#include "template/function.h"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "TradingBot::function(10) = " << TradingBot::function(10) << std::endl;
    std::cout << "TradingBot::function(100) = " << TradingBot::function(100) << std::endl;
    std::cout << "TradingBot::function(1000) = " << TradingBot::function(1000) << std::endl;
    return 0;
}
