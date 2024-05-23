#include "BitcoinExchange.hpp"


// don’t hesitate to go wild on changes to the input file, the whole exercise is basically about parsing
// the database provided in the subject should not be edited, at least that’s been my understanding, but you should still check if the program throws an error
//  if it’s not in a readable state using chmod or similar
// ask the evaluatee about their use of the chosen container - there are multiple ways to use them
int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	std::ifstream input;
	input.open(argv[1]);
	if (!input.good())
	{
		std::cerr << "Error: could not open file.\n";
		return (0);
	}
	BitcoinExchange ex;
	BitcoinExchange ex2 = ex;
	ex2.convert(input);

}