#include <iostream>
#include <string>
#include <map>
using namespace std;

//todo:  reverse iterator pointing to the last element in the container (i.e., its reverse beginning).
void reverse_op(map<string, int> &mm){
    map<char,int> marks_map;

  marks_map['x'] = 100;
  marks_map['y'] = 200;
  marks_map['z'] = 300;

  map<char,int>::reverse_iterator rit;
  for (rit=marks_map.rbegin(); rit!=marks_map.rend(); ++rit)
  cout << rit->first << " => " << rit->second << endl;
}

int main(){
    map <string, int> marks_map;
    marks_map["mahesh"] = 99;
    marks_map["ddd"] = 76;
    marks_map["www"] = 58;

    marks_map.insert({{"ttt", 39}, {"qqq", 88}}); 
    cout <<"the size is : " << marks_map.size() << endl;
    
    map<string, int> :: iterator itr;
    for(itr = marks_map.begin(); itr != marks_map.end(); itr++){
        cout << (* itr).first<< " : " << (* itr).second << endl;

    }
    cout << endl;
    reverse_op(marks_map);
    return 0;
}