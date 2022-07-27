#ifndef TRADINGBOT_TEMPLATE_GETTESTINGTF_H
#define TRADINGBOT_TEMPLATE_GETTESTINGTF_H
#include <string>
#include <tuple>
using std::string;

namespace TradingBot {

//! Template function
/*!
    Template function details.

    Thread-safe.

    \param date - Template function parameter
    \return Template function result
*/
std::tuple<string, string, string> getTestingTF(string date);

/*! \example template_function.cpp Template function example */

} // namespace TradingBot

#endif // TRADINGBOT_TEMPLATE_FUNCTION_H
