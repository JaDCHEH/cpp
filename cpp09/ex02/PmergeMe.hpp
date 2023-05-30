#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <exception>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>

class PmergeMe {
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe& copy);
		PmergeMe &operator=(const PmergeMe& copy);
		~PmergeMe(void);

		void SortVector(int argc, char **argv);
		void sortList(int argc, char **argv);

		class InvalidElement : public std::exception {
			public:
				virtual const char* what() const throw();  
		};
		class RepeatedElement : public std::exception {
			public:
				virtual const char* what() const throw();  
		};
};

#endif // PMERGEME_HPP