#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class base_class{
    public :
    int var_base;

    virtual void display(){
        cout << "1. The display of the base_class variable : " << var_base << endl;
    }
};

class derived_class : public base_class{
    public :
    int var_derived;
    void display(){
        cout << "2. The display of the base_class variable : " << var_base << endl;
        cout << "2. The display of the derived_class variable : " << var_derived << endl;
    }
};

int main()
{
    base_class *  base_class_ptr;
    derived_class * derived_class_ptr;
    base_class obj_base;
    derived_class obj_derived;
    base_class_ptr = &obj_derived;
    derived_class_ptr = &obj_derived;
    
    
    base_class_ptr -> var_base = 65;
    base_class_ptr -> display();
    derived_class_ptr -> var_derived = 234;
    derived_class_ptr -> display();
    return 0;
}