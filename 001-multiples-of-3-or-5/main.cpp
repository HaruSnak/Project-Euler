#include <string>
#include <iostream>
#include <set>
#include <numeric>

//Program to solve the exercise "Multiples of 3 or 5" using as much of the CPP98 concepts as possible so
//that I can familiarize myself as much as possible.
unsigned long calculStack(std::set<unsigned long> stack)
{
	return (std::accumulate(stack.begin(), stack.end(), 0));
}

int main(void)
{
	std::set<unsigned long> stack;
	for (size_t i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			stack.insert(i);
	}
	std::cout << calculStack(stack) << std::endl;
}