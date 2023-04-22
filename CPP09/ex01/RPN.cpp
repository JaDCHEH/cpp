#include "RPN.hpp"


int ft_stoi(const std::string& str)
{
	int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

RPN::RPN(void) {};

RPN::RPN(const RPN &copy) {
	*this = copy;
}

RPN& RPN::operator=(const RPN &copy) {
	(void)copy;
	return *this;
}

RPN::~RPN(void) {};

int RPN::valid_expression(const std::string& expr)
{
	if (expr.find_first_not_of("0123456789+-/* ") == std::string::npos)
		return 1;
	return 0;
}

long long RPN::calculate(const std::string& expr)
{
	int left;
	int right;
	int result;
	std::stringstream postfix(expr);
	std::stack<int> temp;
	std::string s;
	
	while (postfix >> s)
	{
		if (s == "+" || s == "-" || s == "/" || s == "*")
		{
			if (temp.size() < 2)
				throw MalFormatedARG();
			right = temp.top();
			temp.pop();
			left = temp.top();
			temp.pop();
			if (s == "+")
				result = left + right;
			else if (s == "-")
				result = left - right;
			else if (s == "/")
			{
				if (right != 0)
					result = left / right; 
				else
					throw ZeroDivision();
			}
			else
				result = left * right;
			temp.push(result);
		}
		else
			temp.push(ft_stoi(s));
	}
	return temp.top();
}

const char*	RPN::MalFormatedARG::what() const throw() {
	return "Error: please check that the argument is well formated";
}

const char*	RPN::ZeroDivision::what() const throw() {
	return "Error: division by zero";
}
