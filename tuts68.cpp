#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  //todo: template Overloading 
template <class T>
class Mahesh{
    public:
    T data;
    Mahesh(T a){
        data = a;
    }
    void Display();
    // {
    //     // cout << data << endl;
    // }
};

template <class T>
void Mahesh<T> :: Display(){
    cout << data << endl;
}
void func(int a){
    cout << "I am first func() :" << a << endl;
}

template <class T>
void func(T a){
    cout << "I am first temperized func() : " << a << endl;
}

template <class T>
void func1(T a){
    cout << "I am first temperized func() : " << a << endl;
}
int main()
{
    // Mahesh<float> o1(1.54);
    // //* method 1
    // cout << o1.data << endl;
    // //* method 2
    // o1.Display();

    func(4);
    func1(4);
    return 0;
}