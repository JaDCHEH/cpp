#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return 0;
	PmergeMe pmm;

	try {
		for (int i = 1; i < argc; i += 1)
			if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
				throw PmergeMe::InvalidElement();

		std::vector<unsigned int>temp;
		for (int i = 1; i < argc; i += 1)
			temp.push_back(ft_stou(argv[i]));

		std::vector<unsigned int>::iterator itr;
		std::vector<unsigned int>::iterator itr2;
		for (itr = temp.begin(); itr != temp.end(); itr++)
		{
			for (itr2 = itr + 1; itr2 != temp.end(); itr2++)
				if (*itr2 == *itr)
					throw PmergeMe::RepeatedElement();
		}
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	pmm.sortVec(argc, argv);
	std::cout << std::endl;
	pmm.sortList(argc, argv);

	return 0;
}