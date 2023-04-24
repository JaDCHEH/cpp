#include "BitcoinExchange.hpp"


unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

float ft_stof(const std::string& str)
{
	float num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

BitcoinExchange::BitcoinExchange(void){};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy) {
	this->dataBase = copy.dataBase;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void){};

float BitcoinExchange::getvalue(const std::string& date)
{
	if (this->dataBase.count(date) > 0)
		return this->dataBase.at(date);
	return (--this->dataBase.lower_bound(date))->second;
}

int BitcoinExchange::Is_date_correct(const std::string &date)
{
	if (date.empty())
		return 0;

 	size_t first_hyphen = date.find('-');
	size_t second_hyphen = date.find('-', first_hyphen + 1);

	if (first_hyphen == std::string::npos || second_hyphen == std::string::npos
	||  date.find_first_not_of("0123456789.-") != std::string::npos)
	{
		std::cerr << "Error: bad input :" << std::endl << line << std::endl;
		return 0;
	}
	return 1;
}

int BitcoinExchange::Is_date_valid(const std::string& date)
{
	std::string s;
	int year, month, day;
	std::istringstream ss(date);
	int i = 0;

	while (std::getline(ss, s, '-'))
	{
		if (i == 0)
		{
			year = ft_stou(s);
			if (year < 2009 || year > 2022)
			{
				std::cerr << "Error: year is not at the database :" << std::endl << date << std::endl;
				return 0;
			}
		}
		if (i == 1)
		{
			month = ft_stou(s);
			if (month < 1 || month > 12)
			{
				std::cerr << "Error: Invalid month :" <<std::endl << date << std::endl;
				return 0;
			}
		}
		if (i == 2)
		{
			day = ft_stou(s);
			if ((day < 1 || day > 31)
			||  (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			||  (day > 28 && month == 2))
			{
				std::cerr << "Error: Invalid day :" << std::endl << date << std::endl;
				return 0;
			}
		}
		i += 1;
	}
	if (i != 3)
	{
		std::cerr << "Error: incorrect date :" << std::endl << date << std::endl;
		return 0;
	}
	return 1;
}

int BitcoinExchange::Is_value_correct(const std::string& value)
{
	if (value.empty() || value.find_first_not_of("0123456789.-") != std::string::npos
	||  value.at(0) == '.' || value.find('.', value.length() - 1) != std::string::npos)
		std::cerr << "Error: Invalid value in database :" << std::endl << value << std::endl;
	else if (value.at(0) == '-')
		std::cerr << "Error: Negative number :" << std::endl;
	else if (value.length() > 10 || (value.length() == 10 && value > "2147483647"))
		std::cerr << "Error: Out of Boundaries number :" << std::endl;
	else
		return 1;
	return 0;
}

void BitcoinExchange::readInternalDataBase(std::ifstream& internal_db)
{
	std::string line;
	size_t limiter;

	std::getline(internal_db, line);
	while (std::getline(internal_db, line))
	{
		limiter = line.find(',');
		std::string value = line.substr(limiter + 1);
		this->dataBase[line.substr(0, limiter)] = ft_stof(value);
	}
	internal_db.close();
}
