#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// What happens when more restrictive access
//  is given to a derived class method in C++?

class base{
    public :
    virtual int func1(int x){
        cout<< "the base :: func1(int x) called"<< endl;
    }
};

class derived : public base{
    private :
    int func1(int z){
        cout<< "the derived :: func1(int z) called"<< endl;
    }
};

int main()
{
    // base *ptr = new base;
    // ptr->func1(234);
    
    base *ptr = new derived;
    ptr->func1(234);
    return 0;
}