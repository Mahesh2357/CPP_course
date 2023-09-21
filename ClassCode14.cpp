#include <bits/stdc++.h>
using namespace std;
// class code .
class A
{
private:
    int z;

protected:
    int x;

public:
    A()
    {
        cout << "We called Defult constructor of A" << endl;
        x = 0;
    }
    A(int x, int z)
    {
        cout << "We called Parametrized constructor of A" << endl;
        this->x = x;
        this->z = z;
    }
    void show()
    {
        cout << "\nWe are in class A" << endl;
        cout << "The value of x is : " << x << endl;
    }
    int get_z() { return z; }
};


class B : public A
{
    int y;

public:
    B() : A()
    {
        cout << "We called Defult constructor of B" << endl;
        y = 0;
    }
    B(int x, int y, int z) : A(x, z)
    {
        cout << "We called Parameterized constructor of B" << endl;
        this->y = y;
    }
    int display()
    {
        int temp = A :: get_z();
        cout << "\nWe are in class B" << endl;
        cout << "The value of y is : " << y << endl;
        cout << "The value of x is from class B : " << x << endl;
        cout << "The temp is : " << temp << endl;
        return 0;
    }
};

int main()
{
    B o1(33, 65, 100);
    // B o2;
    B o2(33, 65, 100);
    o2.display();
    o1.get_z();
    o1.show();
    o1.display();

    return 0;
}