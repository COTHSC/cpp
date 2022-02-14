#include <bits/stdc++.h>
using namespace std;
 
class Integer {
private:
    int i;
 
public:
    // Parameterised constructor
    Integer(int i = 0)
    {
        this->i = i;
    }
 
    // Overloading the postfix operator
    Integer operator--(int)
    {
        Integer temp;
        temp.i = i--;
        return temp;
    }
 
    // Function to display the value of i
    void display()
    {
        cout << "i = " << i << endl;
    }
};
 
// Driver function
int main()
{
    Integer i1(3);
 
    cout << "Before decrement: ";
    i1.display();
 
    // Using the post-decrement operator
    Integer i2 = i1--;
 
    cout << "After post decrement: ";
    i2.display();
    i1.display();
}
