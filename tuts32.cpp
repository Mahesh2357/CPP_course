#include <iostream>
using namespace std;
// Constructors With Default Arguments In C++.

// Default arguments of the constructor are those which are provided in the constructor declaration.
//  If the values are not provided when calling the constructor the constructor uses the default arguments automatically.
class simple_data
{
    int data1;
    int data2;
    int data3;
public:
    simple_data(int a, int b = 44, int c = 123) // default arguments .
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print_data();
};
void simple_data ::print_data()
{
    cout << "The value of data1, data2 and data3 is " << data1 << " , " << data2 << " and " << data3 << endl;
}
int main()
{
    simple_data o1(5, 77);
    o1.print_data();
    return 0;
}