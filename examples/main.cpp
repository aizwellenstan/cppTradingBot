#include <iostream> //std::cout
#include "template/getTestingTF.h"
#include <vector>

#define ISTESTING true
#define DAYLIGHTSAVING true

template<typename T>
void printVector(std::vector<T> v) {
    for (const auto &item : v) {
        std::cout << item+ ",";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "CMake\n";

    if(ISTESTING) {
        std::cout << "ISTESTING\n";
        std::string usCheckPreChangeTime, endDateTimeD1, endDateTimePreScanner, endDateTimeAskBid;
        tie(usCheckPreChangeTime, endDateTimeD1, endDateTimePreScanner, endDateTimeAskBid) = TradingBot::getTestingTF(DAYLIGHTSAVING, "2022-05-11");
        std::vector<std::string> stockList = {"IBM", "BHC"};
        printVector(stockList);
    }
    return 0;
}