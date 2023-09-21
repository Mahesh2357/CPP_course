#include <iostream>
using namespace std;   //tuts 29.cpp
// Constructor is a special member function with same name as of the class 
// It is used to initialised the object of its class
// it is automatically initialized member function with same name as of the class.
// it is automatically initialized invoked whenever the object is created.

class complex
{
    int a, b;
    public:
    // create a constructor.
    complex(void);  //  Complex constructor decleration.

    void print_value(){
        cout << "complex number is : " << a << " + " << b << "i" << endl; 
    }

};
// There is no return type of constructor
// not even void because it is not required.        

complex :: complex (void)   // default constructor..
// we create a complex function as same name of class.
// i.e, complex.
{                          
    a = 55;            
    b = 66;
    cout << "HELLO MAHESH......." << endl;
    // if you want to write anything inside the constructor,
    // then it is run the on constructor called.
}
int main()
{
    complex o1, o2, o3;     // without calling we run function.
    o1.print_value();
    o2.print_value();
    o3.print_value();
    cout << "complex......" << endl;
    return 0;
}
// Charterstics of constructor......

// 1. it should be declared inside the public section of class.
// 2.  a constructor is automatically invoked when an object is created, 
//the destructor is called when the object is destroyed.
// 3. constructors cannot have return values and return data type.
// 4. it can have default arguments.
// 5. we cannot refere to their address.