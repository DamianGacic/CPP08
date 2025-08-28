#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	try
	{
		std::cout << "Testing addInterval function with range:" << std::endl;
		Span sp = Span(15);
		
		sp.addInterval(3, 9);  // Adds numbers 3,4,5,6,7,8,9
		sp.display();
		
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		
		// Test error case - invalid range
		std::cout << "\nTesting invalid range:" << std::endl;
		Span sp2 = Span(5);
		sp2.addInterval(10, 25);  // Should throw exception (start > end)
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "\nTesting with large random vector:" << std::endl;
		srand(time(NULL));
		std::vector<int> nums;
		Span large_span = Span(100);
		
		for (int i = 0; i < 100; i++)
		{
			int val = rand() % 1000000;
			nums.push_back(val);
		}
		large_span.addNumber(nums.begin(), nums.end());
		large_span.display();
		std::cout << "Longest span: " << large_span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << large_span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "\nTesting with individual addNumber calls:" << std::endl;
		Span manual_span = Span(10);
		
		manual_span.addNumber(6);
		manual_span.addNumber(3);
		manual_span.addNumber(17);
		manual_span.addNumber(9);
		manual_span.addNumber(11);

		manual_span.display();
		std::cout << "Longest span: " << manual_span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << manual_span.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
