// #include <iostream>
// using namespace std;
// class student{                     // error message
//     int id;
//     char name[10];
//     float marks;

//     public:
//     float get_Mark() { return marks; }
//     void set_Mark(float m) { marks = m; }

//     int get_id() { return id; }
//     void set_id(int i) { id = i;} 

//     char* get_name() { return name; }
//     void set_name(char nm[]) { name = nm[]; }
//     // constructor
//     student(){ 
//         cout << "defult constructor ......." << endl;
//         id = 6666;
//         strcpy(name, "MAHESH");
//         marks = 44.66;
//     }
//     student(int i, char nm[], float m){ 
//         cout << "parameterized constructor ......." << endl;
//         id = i;
//         strcpy(name, "dddd");
//         marks = m;
//     }
// void set_data(){
//     cout << "Enter the data :" << endl;
//     cout << "Enter the id :" << endl;
//     cin >> id;
//     cout << "Enter the name :" << endl;
//     cin >> name;
//     cout << "Enter the marks :" << endl;
//     cin >> marks;
// }
// void print_data(){
//     cout << "Print the data : " << endl;
//     cout << "print the id :"<< id;
//     cout << "print the name :" << name << endl;
//     cout << " print the marks :" << marks << endl;
// }
// }; 
// int main()
// {
//     student s1;
//     s1.set_data();
//     S1.print_data();

//     char name[20];
//     strcpy(name , s1.get_data());
//     s1.print_data();
//     return 0;
// }