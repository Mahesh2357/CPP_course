#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    string s1 = "mahesh";
    cout << "Enter the data : ";
    cout << s1 << endl;
    cin >> s1;

    //todo: print string in forword direction.
    cout << "s1 = " << s1 << endl;
    string::iterator itr1 = s1.begin();
    while (itr1 != s1.end())
    {
        cout << *itr1;
        itr1++;
    }
    cout <<" Your data is : " << s1 << endl;

    // //todo: print string in reverse direction.
    // auto itr2 = s1.rbegin();
    // while (itr2 != s1.end()){
    //     cout << *itr2;
    //     itr2++;
    // }
    return 0;
}