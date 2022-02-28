#include <vector>
#include <list>
#include "MutantStack.hpp"
int main()
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
    // //[...]
    mstack.push(198);
    std::cout << *mstack.end() << std::endl;
    std::cout << *mstack.begin() << std::endl;


    std::cout << "\n\n--- Printing through with iterators---\n\n";

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    it++;
    it--;

    while (it != ite)
    {
         std::cout << *it << std::endl;
         ++it;
    }


    std::cout << "\n\n--- Now reverse iterators---\n\n";


    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    ++rit;
    --rit;
    rit++;
    rit--;

    while (rit != rite)
    {
         std::cout << *rit << std::endl;
         ++rit;
    }
    
    std::cout << "\n\n--- Now doing the same thing with std::list---\n\n";

    std::list<int> alist;

    alist.push_back(5);
    alist.push_back(3);
    alist.push_back(5);
    alist.push_back(737);
    alist.push_back(198);


    std::cout << "\n\n--- Printing through with iterators---\n\n";

    std::list<int>::iterator it2 = alist.begin();
    std::list<int>::iterator ite2 = alist.end();
    
    ++it2;
    --it2;
    it2++;
    it2--;

    while (it2 != ite2)
    {
         std::cout << *it2 << std::endl;
         ++it2;
    }


    std::cout << "\n\n--- Now reverse it22erators---\n\n";


    std::list<int>::reverse_iterator rit2 = alist.rbegin();
    std::list<int>::reverse_iterator rite2 = alist.rend();

    ++rit2;
    --rit2;
    rit2++;
    rit2--;

    while (rit2 != rite2)
    {
         std::cout << *rit2 << std::endl;
         ++rit2;
    }
    return 0;
}