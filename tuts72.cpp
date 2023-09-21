#include <iostream>
#include <list>
using namespace std;

void display(list <int> &list2){
    list <int> :: iterator it;
    // it = list2.begin();
    //todo: list size 
    cout << "List is : " << list2.size() << endl;

    for (it = list2.begin(); it != list2.end();it++){
        cout << *it << "  ";
    }
    cout << endl;
}

int main(){
    //todo: list of 0 elements.
    list<int> list1;
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(45);
    list1.push_back(45);
    list1.push_back(43);
    list1.push_back(89);
    list1.push_back(78);

    list <int> :: iterator iter;
    iter = list1.begin();
    // cout << * iter << endl;
    // iter++;
    // cout << * iter << endl;
    // iter++;
    // cout << * iter << endl;
    // iter++;
    // cout << * iter << endl;
    // iter++;
    //todo: list sorting.
    list1.sort();
    display(list1);
    cout << endl;

    //todo: reverse list.
    list1.reverse();
    display(list1);
    cout << endl;

    //todo: resize of list. 
    list1.resize(18);

    //todo: list of 3 elements.
    list<int> list3(3);
    list<int> :: iterator itr1;
    itr1 = list3.begin();
    
    * itr1 = 23;
    itr1++;
    
    * itr1 = 43;
    itr1++;

    * itr1 = 33;
    itr1++;
    display(list3);
    cout << endl;

    //todo: list after sorting and merge all elements. 
    list1.sort();
    list3.sort();
    list1.merge(list3);
    cout << " List1 after merge: " << endl;
    display(list1);
    return 0;
}