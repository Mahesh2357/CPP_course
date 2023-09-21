#include <iostream>
using namespace std;
class y;                   // friend function.
class x
{
    int data;
    friend void add(x, y);
    public:

    void set_data(int value)
    {
        data = value;
    }
};
class y
{
    int number;
    friend void add(x, y);
    public :
    void set_number(int value)
    {
        number = value;
    }
};
void add(x o1, y o2)
{
    cout << "Sum of data of x and y is : " <<o1.data + o2.number << endl;
}
int main()
{
    x a1;
    a1.set_data(6);
    a1.set_data(8);     // compiler takes this value as a1. i.e., a1 = 8. 
    y a2;
    a2.set_number(1);
    add(a1, a2);
    return 0;
}