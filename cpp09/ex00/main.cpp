#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: btc <input_file>" << std::endl;
        return 1;
    }

    std::string inputFile = argv[1];
    std::string historicalPricesFile = "data.csv";
    BitcoinExchange btcExchange;
    btcExchange.loadHistoricalPrices(historicalPricesFile);
    btcExchange.processInputFile(inputFile);

    return 0;
}
