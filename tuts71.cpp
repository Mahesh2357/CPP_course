#include <iostream>
#include <vector>
using namespace std;
template < class T>

// todo:  for vector elements.
void display(vector<T> &v) {
    cout << "The vector element are : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> vec1;
    vector <char> vec2;
    vector <char> vec3(vec2);
    vector <int> vec4(6, 3);
    int element, size = 5;
    display(vec1);
    display(vec4);
    display(vec3);

    vec2.push_back('r');
    display(vec2);
    return 0;
}