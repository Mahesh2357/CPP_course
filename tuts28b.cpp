#include <iostream>
using namespace std;
class qq;   //forward decleration.
class ww     
{
    int val1;
    friend void exchange(ww &, qq &);  
public:
    void in_data(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "val1 = " << val1 << endl;
    }
};
class qq
{
    int val2;
    friend void exchange(ww &, qq &);
public:
    void in_data(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << "val2 = " << val2 << endl;
    }
};
void exchange(ww &x, qq &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    ww m1;
    qq m2;

    m1.in_data(55);
    m2.in_data(99);
    
    exchange(m1, m2);

    cout << "The value of m1 after exchanging is : ";
    m1.display();
    cout << "The value of m2 after exchanging is : ";
    m2.display();
    return 0;
}