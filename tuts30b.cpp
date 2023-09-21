#include <iostream>
using namespace std;

class point
{
    int x, y;
    public:

    point(int a, int b)
    {
        x = a; y = b;
    }
    void display_point()
    {
        cout <<"the point is : (" << x << ", " << y <<")" << endl;
    }
};

int main()
{
    point w1(44, 66);
    w1.display_point();

    point w2(56, 99);
    w2.display_point();
    return 0;
}