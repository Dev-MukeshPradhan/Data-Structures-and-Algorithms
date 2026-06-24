#include<iostream>
using namespace std;
class Student{  // user defined datatype
public:
    string name;
    int rno;
    float marks;
    Student(string n, int r, float m){  // Contructor is called whenever a object is created so we can use constructor to initialize values
        name = n;
        rno = r;
        marks = m;
    }
    
};

int main(){
    Student s1("Mukesh", 76, 92.6);
    cout<<s1.marks<<"\n";
    cout<<"code exectuted successfully";
    return 0;
}