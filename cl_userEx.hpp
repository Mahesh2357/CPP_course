#include <iostream>
#include <bits/stdc++.h>
#include <exception>
using namespace std;

class Low_balance_Exception : public Exception{
    char message[40];

public:
    Low_balance_Exception(char message[]){
        strcpy(this->message, message);
    }
    char *getMessage(){
        return message;
    }
};