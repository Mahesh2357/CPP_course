#include <iostream>
#include <list>
using namespace std;

void display(list <int> &list2){
    list <int> :: iterator it;
    // it = list2.begin();
    //todo: list size 
    cout << "List is : " << list2.size() << endl;

    for (it = list2.begin(); it != list2.end();it++){
        cout << *it << " ";
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

    //todo: remove element from front of list.
    list1.pop_front();
    
    //todo: remove element from back of list.
    list1.pop_back();

    //todo: remove the perticular all elements from the list.
    list1.remove(45); 
    
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
    display(list1);

    //todo: reverse list.
    list1.reverse();
    display(list1);
    cout << endl;

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
    return 0;
}