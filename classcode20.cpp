#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    cout << "printing vector " << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << "  ";
    }
    
    arr.pop_back();
    arr.pop_back();

    cout << endl;
    cout << "printing vector " << endl;

    vector<int> ::iterator itr = arr.begin();
    while (itr !=arr.end())
    {
        cout << *itr << " ";
        itr++;
    }
    return 0;
}