#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class base{   // Private is default and it is not incredible.
    int data1;
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base :: setData(void){
    data1 = 54;
    data2 = 100;
}

int base :: getData1(){ return data1; }
int base :: getData2(){ return data2; } 
// public is used.
class derived : public base{  // class is being derived publically.
    int data3;
    public:
    void process();
    void display();
};

void derived :: process(){
    data3 = data2 + data2 * getData1();
}
void derived :: display(){
    cout << "The value of data1 is : " << getData1() << endl;
    cout << "The value of data2 is : " << data2 << endl;
    cout << "The value of data3 is : " << data3 << endl;
}

int main()
{
    derived o1;
    o1.setData();
    o1.process();
    o1.display();
    return 0;
}