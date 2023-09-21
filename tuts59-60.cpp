#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <fstream>

int main()
{
    string st = "Mahesh...";
    // ofstream ofs(st);

    //* Opening files using constructor and writing it
    // Write operation
    // ofstream out("sample60.txt");
    // out << st;
    
    string st2;
    ifstream in("sample60b.txt");
    //* for all words in line. and first line in sample60b.txt
    getline(in, st2);
    //* for next line in sample60b.txt
    getline(in, st2);
    //! for first word.
    // in >> st2; 
    cout << st2 << endl;
    return 0;
}