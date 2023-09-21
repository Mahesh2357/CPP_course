#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ofstream mout("sample60.txt");
    // cout << "Enter your name : ";
    // string name;
    // cin >> name;

    // mout <<"your name : "+ name << endl;
    // mout.close();

    ifstream min("./sample60.txt");
    // string content;
    // min >> content;
    string ww;
    getline(min, ww);
    cout << "content of file : " << ww << endl;
    // cout << "Content of file : " << content << endl;
    min.close();
    return 0;
}