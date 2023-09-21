// #include "cl_manager.cpp"
#include <iostream>
#include <bits/stdc++.h>

#include <string>
#include <cstring>
#include <string.h>
using namespace std;
#include "cl_insentive.cpp"

employee *create_object(){
    employee *o;
    int ch;
    cout << "Enter the options...."
    << "1. Salesperson \n 2. Manager" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        o = new salesperson(11, "gg", 2000.0, 5300.0);
        break;
    
    case 2:
        o = new manager(2, "Mahesh", 5000.0f, 100, "rr");
        break;
    }   
    return o;
}

int main()
{
    employee *o1 = create_object();
    employee *o2 = create_object();

    o1->display();
    o2->display();
    
    return 0;
}