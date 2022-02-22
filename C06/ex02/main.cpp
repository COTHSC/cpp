#include "Base.hpp"

Base *generate( void )
{
    int randNum;
    randNum = rand() % (3-1+1)+1;
    Base *ret;

    switch (randNum)
    {
        case 1:
        {
            ret = new A;
            break;
        }
        case 2:
        {
            ret = new B;
            break;
        }
        case 3:
        {
            ret = new C;
            break;
        }
        default:
            break;
    }
    return ret;
}

void identify(Base* p)
{
    if (A *test1 = dynamic_cast<A*>(p))
    {
        std::cout << "This is base A\n";
        return ;
    }
    if (B *test2 = dynamic_cast<B*>(p))
    {
        std::cout << "This is base B\n";
        return ;
    }
    if (C *test3 = dynamic_cast<C*>(p))
    {
        std::cout << "This is base C\n";
        return ;
    }
    else
        std::cout << "this is not a known base\n" << std::endl;
};

void identify(Base& p)
{
    try
    {   
        dynamic_cast<A&>(p);
        std::cout << "This is base A\n";
    }
    catch(const std::bad_cast& e)
    {
        try
        {
            dynamic_cast<B&>(p);
            std::cout << "This is base B\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                dynamic_cast<C&>(p);
                std::cout << "This is base C\n";
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        
    }
    
};

int main (void)
{
    Base *p;
    srand(time(NULL));
    p = generate();
    identify(p);
    identify(*p);
    return 0;
}