#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample60b.txt");
    out << "This is a sample file" <<endl;
    out << " This is me " << endl;
    out << "This is alsi me " << endl;
    out.close();
    
    ifstream in;
    string s1, s2;
    in.open("sample60b.txt");
    //* in >> s1 >> s2;

    while (in.eof()==0)
    {
        getline(in, s1);
        cout << s1 << endl; 
    }
    
    // cout << s1 << endl;
    // cout << s2 << endl;

    in.close();
    return 0;
}