#include <iostream>
#include "template/getTestingTF.h"
using std::string;

#define ISTESTING true

int main() {
    std::cout << "CMake\n";

    if(ISTESTING) {
        std::cout << "ISTESTING\n";
        string endDateTimeD1, endDateTimePreScanner, endDateTimeAskBid;
        tie(endDateTimeD1, endDateTimePreScanner, endDateTimeAskBid) = TradingBot::getTestingTF("2022-06-06");
        std::cout << endDateTimeD1+"\n";
        std::cout << endDateTimePreScanner+"\n";
        std::cout << endDateTimeAskBid+"\n";
    }
    return 0;
}