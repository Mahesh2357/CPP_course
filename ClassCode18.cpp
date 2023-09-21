#include <iostream>
#include <bits/stdc++.h>
using namespace std;

# template <class T>
class cstack{
    T * stk;
    int size;
    int top;

    public:
    cstack(int size){
        this -> size = size;
        this->stk = new T[size];
        top = -1;
    }
    void push( T data ){
        if (top >= size-1)      
        {
            throw "stack is full";
        top++;
        stk[top] = data;
        }
    }
    T pop(){
        if(top == -1) throw "stack is empty";
        T temp = stk[top];
        top--;
        return temp;
    }

    void printStack(){
        if(top == -1) throw "stack is empty";
        cout << "printing stack data " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << stk[i] << endl;
        }
    }
    ~cstack(){
        delete [] stk;
    }
};