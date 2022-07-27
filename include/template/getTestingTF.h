#ifndef TRADINGBOT_TEMPLATE_GETTESTINGTF_H
#define TRADINGBOT_TEMPLATE_GETTESTINGTF_H
#include <string>
#include <tuple>

namespace TradingBot {

//! Template function
/*!
    Template function details.

    Thread-safe.

    \param date - Template function parameter
    \return Template function result
*/
std::tuple<time_t, time_t, time_t, time_t> getTestingTF(bool dayLightSaving, std::string date);

/*! \example template_function.cpp Template function example */

} // namespace TradingBot

#endif // TRADINGBOT_TEMPLATE_FUNCTION_H
