#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// virtual keyword is used. 
// for avoiding the copies of data from person. 
class person{
    public:
    person(int x){
    cout << "the person ::person(int) called"  << endl;
    }
    person(){
        cout << "the person ::person() called" << endl;
    }
};

class student : virtual public person{
    public:
    student(int x): person(x){
        cout << "the student ::student(int) called" << endl;
    }
};

class faculty : virtual public person{
    public:
    faculty(int x):person(x){
        cout << "the faculty ::faculty(int) called" << endl;
    }
};

class TA : public student, public faculty{
    public:
    TA(int x): student(x), faculty(x){
        cout << "the TA ::student(int) called" << endl;
    }
};
int main()
{
    TA o1(864); // pass any argument.
    return 0;
}