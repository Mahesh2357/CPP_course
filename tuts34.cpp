#include <iostream>
using namespace std;
//A copy constructor is a type of constructor that creates a copy of another object.
// If we want one object to resemble another object we can use a copy constructor. 
class number{
    int a;                // copy constructor code
    public:
    number(){ a = 90; }        
    number(int num){ a = num; }
    
    // copy constructor
    number(number &obj) 
    {
        cout <<"The copy constructor is called .........." << endl; 
        a = obj.a;  
    }
    // interview question.
    // When no copy constructor was found, 
    //then Compiler supplies its own copy constructor.

    //thank you.... 
    void display(){
        cout <<"The number of this object is : "
         << a << endl;
    }
}; 
int main()
{
    number x, y, z(4444);
    x.display();
    y.display();
    z.display();

    cout << endl;
    number o1(z);
    o1.display();

    cout << endl;
    number o3 = z;  
    return 0;
}