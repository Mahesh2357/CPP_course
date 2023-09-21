#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//* class with multiple parameters.
template <class T1, class T2>
class my_class{
    T1 data1;
    T2 data2;

    public :
    my_class(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout << "The data1 is : " << data1 << endl;
        cout << "The data2 is : " << data2 << endl;
    }
};
int main()
{
    my_class<int, double> o1(1,2.66);
    my_class<char, float> o2('v',55.9);
    o1.display();
    o2.display();
    return 0;
}