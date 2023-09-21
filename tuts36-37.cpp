#include <iostream>
using namespace std;
// Inheritance is a process of inheriting attributes of the base class by a derived class. 
class employee
{
public:
    int id;
    float salary;
    employee(int inp_id)
    {
        id = inp_id;
        salary = 44.66;
    }
    employee() {}
};
/*
// derived class syntax
class {{derived- class-name}} : {{visibility-mode}} {{base- class-name}}
{
    class member / methods / etc.....
}
1.  Public visibility mode : public members of base class becomes public members of derived class.
2.  private visiblity mode : public members of base class becomes private members of derived class.
*/

class programmer : public employee
{
public:
    int language_code;
    programmer(int inp_id)
    {
        id = inp_id;
        language_code = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    employee o1(1), o2(2);
    cout << o1.salary << endl;
    cout << o2.salary << endl;

    programmer skillF(165);         
    cout << "skillF language : " << skillF.language_code << endl;
    cout << skillF.id << endl;
    skillF.getData(); 
    return 0;
}