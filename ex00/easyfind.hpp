#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
void	easyfind(T &a, int idx)
{
	typename T::iterator	occ = std::find(a.begin(), a.end(), idx);
	
	if (occ == a.end())
		throw std::runtime_error("No occurence found");
	std::cout << "Value " << idx << " found." << std::endl;	
	return ;
}

#endif
