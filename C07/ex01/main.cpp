#include "iter.hpp"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

template<typename T>
void    testfunc(T to_print)
{
    std::cout << to_print << " ";
}

template<typename T>
bool    is_char(T to_print)
{
    if (sizeof(to_print) == 1)
    {
        std::cout << "true ";
        return true;
    }
    else
        std::cout << "false ";
        return true;
    
}

int main( void )
{
    char    tab[5] = {'a', 'b', 'c', 'd', 'e'};                                 
    int    tab_int[5] = {0, 1, 2, 3, 4};                                 
    float    tab_float[5] = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f};                                 
    std::string str_array[] = {"Hi", " everybody", ""};

    iter< char , void >(tab, sizeof(tab), testfunc);
    std::cout << std::endl;
    iter< int , void >(tab_int, sizeof(tab_int) / sizeof(int), testfunc);
    std::cout << std::endl;
    iter< float , void >(tab_float, sizeof(tab_float) / sizeof(float), testfunc);
    std::cout << std::endl;
    iter< std::string, void >(str_array, 3, testfunc);
    std::cout << std::endl;

   iter< char , bool >(tab, sizeof(tab), is_char);
   std::cout << std::endl;
   iter< char , bool >("here", 4, is_char);
   std::cout << std::endl;
   iter< int , bool >(tab_int, sizeof(tab_int) / sizeof(int), is_char);
   std::cout << std::endl;
   iter< float , bool >(tab_float, sizeof(tab_float) / sizeof(float), is_char);
   std::cout << std::endl;
   iter< std::string, bool >(str_array, 3, is_char);

    return 0;    
}