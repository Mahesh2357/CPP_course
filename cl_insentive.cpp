#include "cl_employee23.cpp"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class salesperson : public employee{
    float incentive;

public:
    salesperson(){
        incentive = 0;
    }

    salesperson(int id, char *name, float salary, float incentive)
     : employee(id, name, salary){
        this->incentive = incentive;
    }
    void display(){
        employee ::display();
        cout << "incentive : " << incentive << endl;
        cout << "salary : " << incentive + cal_salary() << endl;
    }

    float cal_salary(){ return salary + incentive; }
};
