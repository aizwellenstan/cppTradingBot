#include "template/getTestingTF.h"

#include <cstdlib>
#include <string>
#include <tuple>
using std::string;

namespace TradingBot {

std::tuple<string, string, string> getTestingTF(string date)
{
    string endDateTimeD1 = "endDateTimeD1";
    string endDateTimePreScanner = "endDateTimePreScanner";
    string endDateTimeAskBid = "endDateTimeAskBid";
    return std::make_tuple(endDateTimeD1, endDateTimePreScanner, endDateTimeAskBid);
}

} // namespace TradingBot
