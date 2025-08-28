#include "MutantStack.hpp"

void    mutant_test(void)
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator it_end = mstack.end();
    ++it;
    --it;
    while (it != it_end)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return ;
}

void    list_test(void)
{
    std::list<int> list;
    
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator it = list.begin();
    std::list<int>::iterator it_end = list.end();
    ++it;
    --it;
    while (it != it_end)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::list<int> s(list);
    return ;
}

int    main(void)
{
    std::cout << "Testing with MutantStack" << std::endl;
    mutant_test();
    std::cout << "Testing with stdd::list" << std::endl;
    list_test();
}