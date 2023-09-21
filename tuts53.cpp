#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// “this” is a keyword that is an implicit pointer.
class A{
    int x;
    public :

    A& setData(int x){
        this -> x = x;
        return *this;
    }
    void getData(){
        cout <<"the value of the variable x is : " << x << endl;
    }
}; 
  
int main()
{
    A a1;

    //* The main thing to note here is that the function 
    //* “setData” is returning an object on which 
    //* we have used the “getData” function.
    a1.setData(4).getData();
    //* a1.getData();
    return 0;
}