#include <iostream>
using namespace std;
                          // info. of student.
class student{
    int id, age;
    float mark;
    friend void display_data(int, int, float);
    
    public: student(){
    cout << "student id : " << endl;
    cin >> id;
    cout << "student age : " << endl;
    cin >> age;
    cout << "student mark : "  << endl;   
    cin >> mark;
    }
    void display_data();
};
void student :: display_data(){
    cout << "student id : " << id << endl;
    cout << "student age : " << age << endl;
    cout << "student mark : " << mark << endl;
}
int main()
{
    student o1;
    o1.display_data();
    return 0;
}