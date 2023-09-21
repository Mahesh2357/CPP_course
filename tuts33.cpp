#include <iostream>
using namespace std;
// Dynamic Initialization of Objects Using Constructors.

//The dynamic initialization of the object means that 
//the object is initialized at the runtime.

// Dynamic initialization of the object using a 
//constructor is beneficial when the data is of different formats. 
class bank_deposit
{
    int principal;
    int year;
    float interest_rate;
    float return_value;

public:
    bank_deposit() {}
    bank_deposit(int p, int y, float r);
    bank_deposit(int p, int y, int r);
    void display();
};
bank_deposit ::bank_deposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interest_rate = r;
    return_value = principal;

    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
}
bank_deposit ::bank_deposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interest_rate = float(r) / 100;
    return_value = principal;

    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
}

void bank_deposit ::display()
{
    cout << "The Principal value was " << principal
         << " and return value after " << year
         << " years is " << return_value << endl;
}
int main()
{
    bank_deposit o1, o2;
    int p, y;
    float r;
    int R;        //this R is for in percentage

    cout << "Enter the Principal value, year and interest rate : " << endl;
    cin >> p >> y >> r;

    o1 = bank_deposit(p, y, r);
    o1.display();

    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    o2 = bank_deposit(p, y, R);
    o2.display();
    return 0;
}