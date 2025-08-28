#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <climits>

class Span
{
	private:
		std::vector<int>	_tab;
		unsigned int		_N;

	public:
		Span();
		Span(unsigned int nb);
		Span(const Span& cpy);
		Span&	operator=(const Span& src);
		~Span();

		void	addNumber(unsigned int nb);
		int		shortestSpan();
		int		longestSpan();
		void	display();
		void	addInterval(int start, int end);
		template <typename T>
		void addNumber(T b, T e)
		{
			int    s = std::distance(b, e);
			
			if (_tab.size() + s > this->_N)
				throw std::runtime_error("Error: e > b.");
			else
				_tab.insert(_tab.end(), b, e);
		}
};

#endif
