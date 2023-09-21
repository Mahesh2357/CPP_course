#include "cl_employee23.cpp"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class manager : public employee{

    int no_of_subborder;
    char department[20];

    public :
    manager(){
        no_of_subborder = 0;
        department[0] = '\0';

    }
    manager(int id, char *name, float salary, int no_of_subborder,const char department[])
    : employee(id, name, salary){
        this->no_of_subborder = no_of_subborder; 
        strcpy(this->department, department);
    }

    void display(){
        employee :: display();
        cout << "no_of_subborder : " << no_of_subborder << endl;
        cout << "salary :" << cal_salary() << endl;
        cout << "department : " << department << endl;
    }

    float cal_salary(){ return salary; }
};