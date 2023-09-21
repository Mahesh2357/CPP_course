#include <iostream>
using namespace std;
//! use of template.
template <class T>
class vector{
    public :
    T *arr;
    T size;

    vector(int size){
        this->size = size;
        arr = new T[size];
    }

    T Dot_product(const vector &v){
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->arr[i]* v.arr[i];
        }
        return sum;
    } 
};
int main()
{
    vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 0;

    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 6;
    int a = v1.Dot_product(v2);
    cout<<"The dot product is : " << a << endl;
    //* for double.
    vector<double> v3(3);
    v3.arr[0] = 1.0;
    v3.arr[1] = 2.9;
    v3.arr[2] = 0.4;

    vector<double> v4(3);
    v4.arr[0] = 1.0;
    v4.arr[1] = 3.0;
    v4.arr[2] = 0.4;
    double a1 = v3.Dot_product(v4);
    cout << "The dot product in double is : " << a1 << endl;
    return 0;
}