#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Pointer to Derived Class in C++ 
class base_class{
    public :
    int var_base;

    void display(){
        cout << "The display of the base_class variable : " << var_base << endl;
    }
};

class derived_class : public base_class{
    public :
    int var_derived;
    virtual void display(){
        cout << "The display of the base_class variable : " << var_base << endl;
        cout << "The display of the derived_class variable : " << var_derived << endl;
    }
};
int main()
{
    base_class *  base_class_ptr;
    base_class obj_base;
    derived_class obj_derived;
    //* pointing to the base_class to derived_class.
    base_class_ptr = &obj_derived;
    
    //* Will throw an error
    //* base_class_pointer->var_derived= 134;
    base_class_ptr -> var_base = 222;
    base_class_ptr -> display();

    base_class_ptr -> var_base = 87;
    base_class_ptr -> display();
    
    derived_class * derived_class_ptr;
    derived_class_ptr = &obj_derived;
    derived_class_ptr -> var_base = 11;
    derived_class_ptr -> var_derived = 134;
    derived_class_ptr -> display();
    return 0;
}