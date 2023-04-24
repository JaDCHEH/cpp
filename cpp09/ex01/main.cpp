#include "RPN.hpp"

int exit_with_error(const std::string& error)
{
	std::cerr << "Error: " << error << std::endl;
	return 1;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return exit_with_error("invalid number of arguments");
	if (!RPN::valid_expression(argv[1]))
		return exit_with_error("argument should consist of only \"0123456789 /*-+\"");
	try
    {
		std::cout << RPN::calculate(argv[1]) << std::endl;
	}
	catch (std::exception& e)
    {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
