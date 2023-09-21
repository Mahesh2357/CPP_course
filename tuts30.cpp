#include <iostream>      //code for parameterized constructor.
using namespace std;     // tuts30.cpp

// Parameterized constructors are those constructors that take one or more parameters.
// Default constructors are those constructors that take no parameters. 
class complex
{
    int a, b;
public:
    complex(int, int);
    void print_value()
    {
        cout << "complex number is : " << a << " + " << b << "i" << endl;
    }
};

complex :: complex (int x, int y)   // Parameteries  Constructor 
{                                   // takes 2 parameters.
    a = x;
    b = y;
}
int main()
{
    //implicit call
    complex o1(3, 6);
    o1.print_value();

    //explicit call
    complex o2 = complex(1, 2);
    o2.print_value();
    return 0;
}