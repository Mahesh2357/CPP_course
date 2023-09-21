#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class employee
{
protected :
    int id;
    char name[10];
    float salary;

public:
    employee()
    {
        id = 0;
        name[0] = '\0';
        float salary = 0.0;
    }
    
    employee(int id, const char name[], float salary)
    {
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
    }
    void display(void);
    float get_salary();
};

void employee ::display()
{
    cout << "the id of employee is : " <<id << endl;
    cout << " the name of employee is : " << name << endl;
    cout << " the salary of employee is : " << salary << endl;
}
// float employee :: get_salary()
// {
//     // cout << " the salary of employee is : " << endl;
//     return salary;
// }
int main()
{
    employee t1(), t2(11, "kkk", 21.23f);
    t2.display();
    return 0;
}