#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack &cpy) : std::stack<T>(cpy) {}
        ~MutantStack() {}
        MutantStack&    operator=(const MutantStack& src)
        {
            if (this != &src)
                std::stack<T>::operator=(src);
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator  begin()
        {
            return this->c.begin();
        }
        iterator  end()
        {
            return this->c.end();
        }
};

#endif