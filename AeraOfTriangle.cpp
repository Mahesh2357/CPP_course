// CODE -- 15 
// Area Of Triangle by H- formula.

// #include <iostream>
// #include <conio.h>
// #include <cmath>
// using namespace std;
// int main()
// {
//     float a, b, c, s, Area_Of_Triangle;
//     cout << "Enter the number of sides : " << endl;
//     cin >> a >> b >> c;

//     s = (a + b + c) / 2;
//     Area_Of_Triangle = sqrt( s * (s -a) * (s -b) * (s -c));
//     cout << "THe Area of Triangle is : "<< Area_Of_Triangle << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
static int b = 0;
void DisplayData(int *x, int *y = &b)
{
    cout<< *x << " " << *y;
}
int main()
{
    int a = 10, b = 20 ;
    DisplayData(&a, &b);
    return 0;
}