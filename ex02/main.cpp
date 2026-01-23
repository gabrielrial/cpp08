#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "===== print top =====" << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "===== print list =====" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	// Test copy constructor
	std::cout << "===== copy constructor =====" << std::endl;
	MutantStack<int> s1(mstack);
	MutantStack<int>::iterator it1 = s1.begin();
	MutantStack<int>::iterator ite1 = s1.end();

	std::cout << "===== print list =====" << std::endl;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

	// Test assignment operator
	std::cout << "===== assignment operator =====" << std::endl;
	MutantStack<int> s2;
	s2 = mstack;

	MutantStack<int>::iterator it2 = s2.begin();
	MutantStack<int>::iterator ite2 = s2.end();

	std::cout << "===== print list =====" << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	return 0;
}
