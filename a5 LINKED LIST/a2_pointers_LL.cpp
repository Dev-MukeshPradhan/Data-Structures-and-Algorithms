#include<iostream>
using namespace std;

class Student{
    public:               // in class all members are private until u write public
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks){   // constructor is private by default but this contructor is public as it is under public section
        this->name = name;                        // "this" is actually a pointer
        (*this).rno = rno;                        // Another way of mentioning pointer using dereference operator
        this->marks = marks;
    }
};

void change(Student* s1){
    s1->name = "Harsh";

}
int main(){
    Student s1("Raghav", 76, 89.5);
    Student* ptr = &s1;
    cout<<s1.name<<endl;
    (*ptr).name = "Mukesh";
    cout<<s1.name<<endl;
    change(&s1);
    cout<<s1.name<<endl;

    Student* s2 = new Student("Manish", 67, 45.5);
}