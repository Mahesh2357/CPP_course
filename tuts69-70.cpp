#include <iostream>
#include <vector>
using namespace std;

// todo:  for vector elements.
void display(vector<int> &v) {
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
    int element, size;
    cout << "Enter the size of the vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add vector is : ";
        cin >> element;
        vec1.push_back(element);
    }
    // todo:  for pop elements.
    // vec1.pop_back();
    display(vec1);
    vector <int> :: iterator itr = vec1.begin();
    //todo:  for inserted element at first position
    vec1.insert(itr, 455);
    //todo:  for inserted element at any position
    // vec1.insert(itr+1, 45, 222); 

    display(vec1);
    return 0;
}