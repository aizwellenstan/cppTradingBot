#include "template/getTestingTF.h"

#include <cstdlib>
#include <string>
#include <tuple>
#include <sstream> // ss
#include <iomanip> // std::get_time

namespace TradingBot {

std::tuple<time_t, time_t, time_t, time_t> getTestingTF(bool dayLightSaving, std::string date)
{
    struct std::tm tm;
    std::istringstream ss(date);
    // ss >> std::get_time(&tm, "%H:%M:%S"); // or just %T in this case
    ss >> std::get_time(&tm, "%Y-%m-%d");
    std::time_t timeD = mktime(&tm);

    std::time_t usCheckPreChangeTime = timeD + 23 * 60 * 60 + 26 * 60;
    std::time_t usMarketOpenTime = timeD + 23 * 60 * 60 + 30 * 60;

    std::time_t endDateTimeD1, endDateTimePreScanner, endDateTimeAskBid;
    if(dayLightSaving) {
        endDateTimeD1 = usMarketOpenTime + 60;
        endDateTimePreScanner = timeD + 21 * 60 *60 + 56 * 60;
        endDateTimeAskBid = timeD + 10;
    } else {
        endDateTimeD1 = timeD + 60;
        endDateTimePreScanner = timeD - 60 * 60 + 26 * 60;
        endDateTimeAskBid = timeD + 10;
    }

    return std::make_tuple(usCheckPreChangeTime, endDateTimeD1, endDateTimePreScanner, endDateTimeAskBid);
}

} // namespace TradingBot
