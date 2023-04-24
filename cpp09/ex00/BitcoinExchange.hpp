#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitcoinExchange {
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);
		~BitcoinExchange(void);

		void readInternalDataBase(std::ifstream& internal_db);

		float getvalue(const std::string& date);

		int Is_date_correct(const std::string &date);
		int Is_date_valid(const std::string& date);
		int Is_value_correct(const std::string& value);

	private:
		std::map<std::string, float> dataBase;
};

#endif // BITCOINEXCHANGE_HPP