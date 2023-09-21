#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template < class T1, class T2>
float function_avg(T1 a, T2 b) {
    float avg = (a + b)/2.0;
    return avg;
}

template < class T>
void swap1(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = function_avg(4.55, 6);
    printf(" The avg of these numbers : %.3f\n", a);

    int x = 4; int y = 8;
    swap1(x, y);
    cout << x << " " << y << endl; 
    return 0;
}