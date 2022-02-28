#include "Span.hpp"

int randBetween(int low, int high) {
    int sign = (rand() % 2 == 0 ? 1 : -1);    
    return (rand() % (high - low + low) + low) * sign;
}


template<typename T>
void fill_list(T & l) {
        typename T::iterator it = l.begin();
        while (it != l.end())
        {
                *it = randBetween(0, 10000);
                it++;
        }
}

int main (void)
{
    srand(time(NULL));
    Span test_span(10000);
    test_span.addNumber(12);
    test_span.addNumber(11);
    test_span.addNumber(16);
    test_span.addNumber(15);
    test_span.addNumber(12);
    std::vector<int> test_vec(10000);
    fill_list(test_vec);
    test_span.addNumber(test_vec.begin(), test_vec.end());
    std::cout << test_span.shortestSpan() << std::endl;
    std::cout << test_span.longestSpan() << std::endl;
}