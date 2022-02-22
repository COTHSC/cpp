#include <iostream>


template<typename T, typename RET>
void    iter(T *tab, int size, RET (*f)(T))
{
    for (int i = 0 ; i < size ; i++)
        f(tab[i]);
}