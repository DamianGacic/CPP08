#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
    {
        try
        {
            std::cout << "With Vector" << std::endl;
            int    arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

            std::vector<int>    vect(arr, arr + sizeof(arr)/sizeof(arr[0]));

            easyfind(vect, 2);
            easyfind(vect, 1);
            easyfind(vect, 5);
            easyfind(vect, 7);
            easyfind(vect, 8);
            easyfind(vect, 11);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
        {
        try
        {
            std::cout << "With List" << std::endl;
            int    arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            
            std::list<int>        list(arr, arr + sizeof(arr)/sizeof(arr[0]));

            easyfind(list, 9);
            easyfind(list, 6);
            easyfind(list, 3);
            easyfind(list, 2);
            easyfind(list, 4);
            easyfind(list, -1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}