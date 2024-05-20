#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>

// Load historical prices from a CSV file
void BitcoinExchange::loadHistoricalPrices(const std::string& filename) {
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    // Skip the header line
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date, priceStr;
        if (std::getline(ss, date, ',') && std::getline(ss, priceStr)) {
            double price = std::atof(priceStr.c_str());
            prices[date] = price;
        }
    }
}

// Process the input file and compute Bitcoin values
void BitcoinExchange::processInputFile(const std::string& inputFile) const {
    std::ifstream file(inputFile.c_str());
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Error opening file: " << inputFile << std::endl;
        return;
    }

    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date, amountStr;
        if (std::getline(ss, date, '|') && std::getline(ss, amountStr)) {
            // Remove spaces
            date.erase(std::remove(date.begin(), date.end(), ' '), date.end());
            amountStr.erase(std::remove(amountStr.begin(), amountStr.end(), ' '), amountStr.end());
            double amount = std::atof(amountStr.c_str());

            std::map<std::string, double>::const_iterator it = prices.find(date);
            if (it != prices.end()) {
                double value = amount * it->second;
                std::cout << date << " => " << amount << " BTC = $" << std::fixed << std::setprecision(2) << value << std::endl;
            } else {
                std::cout << date << " => No data available for this date" << std::endl;
            }
        }
    }
}
