#include "Span.hpp"

Span::Span()
{
	this->_tab.reserve(0);
	_N = 0;
}

Span::Span(unsigned int nb)
{
	this->_tab.reserve(nb);
	this->_N = nb;
}

Span::Span(const Span& cpy)
{
	*this = cpy;
}

Span::~Span()
{

}

Span&	Span::operator=(const Span& src)
{
	if (this != & src)
	{
		this->_tab = src._tab;
		this->_N = src._N;
	}
	return *this;
}

void	Span::addNumber(unsigned int nb)
{
	if (this->_tab.size() == this->_N)
		throw std::runtime_error("Error: Span is full");
	this->_tab.push_back(nb);
}

int	Span::longestSpan()
{
	size_t	size = _tab.size();
	std::sort(_tab.begin(), _tab.end());
	return _tab[size - 1] - _tab[0];
}

int	Span::shortestSpan()
{
	std::sort(_tab.begin(), _tab.end());
	int	min_span = _tab[1] - _tab[0];
	for (size_t i = 0; i < _tab.size() - 1; i++)
	{
		for (size_t j = i + 1; j < _tab.size(); j++)
		{
			int span = _tab[j] - _tab[i];
			if (span < min_span)
				min_span = span;
		}
	}
	return min_span;
}

void	Span::display()
{
	if (this->_tab.size() == 0)
		throw std::runtime_error(" tab empty");
	if (this->_tab.size() > 30)
		throw std::runtime_error("Error: too many elements to display");
	std::sort(_tab.begin(), _tab.end());
	std::cout << "The tab: ";
	for (size_t i = 0; i < this->_tab.size(); i++)
		std::cout << this->_tab[i] << " ";
	std::cout << std::endl;
}

void	Span::addInterval(int start, int end)
{
	if (start > end)
		throw std::runtime_error(" start > end.");
	for (int val = start; val <= end; val++)
		addNumber(val);
}
