#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T1=int, class T2= float,class T3 = char>
class Object{
    public :
    T1 a; T2 b; T3 c;

    Object(T1 x, T2 y, T3 z){
        a = x;
        b = y; 
        c = z;
    }
    void display(){
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
        cout << "The value of c = " << c << endl;
    }
};
int main()
{
    Object<> o1(3, 4.88, 'w');
    o1.display();

    cout << endl;

    Object<int, char, double> o2(77, 'q', 43.52);
    o2.display();
    return 0;
}