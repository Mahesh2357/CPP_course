// code -- 44
// constructor overloading.

#include <iostream>
using namespace std;
// Constructor overloading is a concept in which one class can have multiple constructors with different parameters.
//  The main thing to note here is that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments,
// so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument.
class ddd
{
    int x, y;

public:
    ddd() // default constructor
    {
        x = 0;
        y = 0;
    }

    ddd(int a, int b) // paramiterized constructor
    {                 // 2 parameters
        x = a;
        y = b;
    }
    ddd(int a) // parameterized constructor
    {          // 1 parameter
        x = a;
        y = 0;
    }
    void display_point()
    {
        cout << "the point is : (" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    ddd q1(3, 5);
    q1.display_point();

    ddd w2(9);
    w2.display_point();

    ddd w3;
    w3.display_point();
    return 0;
}