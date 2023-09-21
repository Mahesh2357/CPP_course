#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main(){
    //todo: Function Object(functor)
    //? => function wrapped in class so that it available like an object.

    int arr[] = { 1 , 32 , 93 , 24 , 75 , 6};    
    //todo: the sorted array.
    //* METHOD 1
    sort(arr, arr + sizeof(arr)/sizeof(6));
    //todo: OR
    sort(arr, arr+5);
    //todo: Function reversed array
    sort(arr, arr+5, greater<int>());

    cout << "The sorted array is : ";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << "  ";
    }
    return 0;
}

//this code is created by Tech-Mahesh.