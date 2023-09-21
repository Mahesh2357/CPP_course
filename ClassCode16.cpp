#include <iostream>
#include <bits/stdc++.h>
using namespace std;

   // multiple inheritance.....
class D{
    int x;
    public:
    D(){
        cout << "the defult constructor of D is called" << endl;
    }
    D(int x){
        this->x = x;
        cout << "the parametrized constructor of D is called" << endl;
    }
    void display(){
        cout << "the value of x is :" << x << endl;
    }
};
class A{
    int y;
    public:
    A(){
        cout << "the defult constructor of A is called" << endl;
    }
    A(int y){
        this->y = y;
        cout << "the parametrized constructor of A is called" << endl;
    }
    void display(){
        cout << "the value of y is : " << y << endl;
    }
};
 
class B : public D, public A {
    int z;
    public:
    B(){
        cout << "the defult constructor of B is called" << endl;
    }
    B(int x, int y, int z) :D(x), A(y){
        cout << "the parametrized constructor of B is called" << endl;
        this->z = z;
    }
    void show(){
        A :: display();
        D :: display();

        cout << "the show in B is called" << endl
        << "The value of z is : " << z << endl;
    }
}; 

int main()
{
    B o1(22, 33, 55);
    o1.show();
    o1.D :: display();
    o1.A :: display();
    return 0;
}