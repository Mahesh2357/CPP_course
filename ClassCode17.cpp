#include <iostream>
#include <bits/stdc++.h>
using namespace std;
          // diamond problem...
class A{
    protected:
    int x; 
    public:
    A(){
        x = 0;
        cout << "The default constructor of A is called " << endl;
    }
    A(int x){
        cout << "The parameterized constructor of A is called " << endl;
        this->x = x;
    }
    virtual void display(){
        cout << "In the display A :" << endl
        << "x = " << x << endl;
    }
};
class B : public A{
   protected:
   int y;
   public:
   B(){
       y = 0;
       cout << " The default constructor of B is called " << endl;
   }
   B(int y, int x) :A(x) {
       cout << "The parameterized constructor of B is called " << endl;
       this->y = y;
   }
   virtual void display(){
       cout << "In the display B : " << endl
       << " y = " << y << endl; 
   }
};

 class C : public A{
    protected:
    int z;
    public:
    C(){
        z = 0;
        cout << " The default constructor of C is called " << endl;
    }
    C(int z, int x) :A(x) {
        cout << "The parameterized constructor of C is called " << endl;
        this->z = z;
    }
    virtual void display(){
        cout << "In the display C : " << endl
        << " z = " << z << endl; 
    }
};

class D :virtual public B,virtual public C{
    protected:
    int w;
    public:
    D(){
        w = 0;
        cout << " The default constructor of D is called " << endl;
    }
    D(int x, int y, int z, int w) :B(x, y), C(x, z) {
        cout << "The parameterized constructor of D is called " << endl;
        this->w = w;
    }
    virtual void display(){
        cout << "In the display D : " << endl
        << " y = " << y << endl 
        << " z = " << z << endl 
        << " w = " << w << endl;     
    }
};

int main()
{
    D o1(10, 20, 30, 40);
    o1.display();
    return 0;
}