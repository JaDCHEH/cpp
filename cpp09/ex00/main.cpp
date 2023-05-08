#include "BitcoinExchange.hpp"


float ft_stof(const std::string& str);

int exit_with_error(std::string error)
{
	std::cerr << error << std::endl;
	return 1;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return exit_with_error("Error: could not open file");

	std::ifstream input_db(argv[1], std::ifstream::in);
	if (!input_db.is_open())
		return exit_with_error("Error: could not open file");

	std::ifstream internal_db("./data.csv", std::ifstream::in);
	if (!internal_db.is_open())
		return exit_with_error("Error: could not open internal database file");

	BitcoinExchange btc;
	btc.readInternalDataBase(internal_db);

	std::string line;

	std::getline(input_db, line);
	while (std::getline(input_db, line))
	{
		size_t limiter = line.find('|');
		if (limiter == std::string::npos || line.length() < limiter + 2)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue ;
		}
		std::string date = line.substr(0, limiter - 1);
		if (!btc.Is_date_correct(date) || !btc.Is_date_valid(date))
			continue;
		std::string value_as_str = line.substr(limiter + 2);
		if (!btc.Is_value_correct(value_as_str))
			continue;
		float value = ft_stof(value_as_str);
		std::cout << date << " => " << value << " = " << std::setprecision(2) << value * btc.getvalue(date) << std::endl;
	}
	input_db.close();
	internal_db.close();
	return 0;
}
