#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <exception>

class RPN {
	public:
		RPN(void);
		RPN(const RPN &copy);
		RPN &operator=(const RPN &copy);
		~RPN(void);

		int valid_expression(const std::string& expr);
		long long calculate(const std::string& expr);

		class MalFormatedARG : public std::exception {
			public:
				virtual const char* what() const throw();  
		};

		class ZeroDivision : public std::exception {
			public:
				virtual const char* what() const throw();  
		};
};

#endif // RPN_HPP