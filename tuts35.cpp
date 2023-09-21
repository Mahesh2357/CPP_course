#include <iostream>       // destructor code
using namespace std;
//Destructor in C++

// A destructor is a type of function which is called when the object is destroyed.
// Destructor never takes an argument nor does it return any value. 
int count = 0;           
class num
{
public:
    num()
    {
        count++;
        cout << "This is time when constructor is called the object number " << count << endl;
    }
    ~num()  //destructor 
    {
        cout << "This is time when constructor is called the object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside the our main function" << endl;
    cout << "creating first object n1 " << endl;
    num n1;
    {
        cout << "Entering the block : " << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting the block" << endl;
    }                 //destructor called.
    cout << "Main to back" << endl;
    return 0;
}