#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange {
public:
    // Load historical prices from a CSV file
    void loadHistoricalPrices(const std::string& filename);

    // Process the input file and compute Bitcoin values
    void processInputFile(const std::string& inputFile) const;

private:
    std::map<std::string, double> prices;
};

#endif // BITCOINEXCHANGE_HPP
