#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Array of Objects Using Pointers in C++ 
class shop_item{
    int id;
    float price;
    public :

    void setData(int x, float y){
        id = x;
        price = y;
    }
    void getData(void){
        cout << "The code for this item is : " << id << endl;
        cout << "The price of this item is : " << price << endl;
    }
};
int main()
{
    int size = 3;
    shop_item *ptr = new shop_item [size];
    shop_item *ptr_temp = ptr;
    int i, p;
    float q;

    for ( i = 0; i < size; i++)
    {
        cout << "Enter the id and prize of item " << i+1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for ( i = 0; i < size ; i++)
    {
        cout << " The item no. is " << i+1 << endl;
        ptr_temp->getData();
        ptr_temp++;
    }
    return 0;
}

//! 45555555
//? 7888888
//* 211111111
//TODO: 56464654