#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                                // class code of multiple inheritance
#ifndef CL_EMPLOYEE23_H
#define CL_EMPLOYEE23_H

class employee{
    private :
    int id;
    char name[30];

    protected :
    float salary;

    public :
    employee(){
        int id = 0;
        name[0] = '\0';
        float salary = 0.0;
    }
    employee(int id,const char name[], float salary){
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
    }

    virtual void display(){
        cout << "id: " << id << endl;
        cout << "name: " << name << endl;
        cout << "salary: " << salary << endl;
    }
    virtual float cal_salary() = 0;
}; 

#endif
