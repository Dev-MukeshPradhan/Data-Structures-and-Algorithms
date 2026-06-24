#include<iostream>
using namespace std;

class Node{             // Linked list Node
    public:
    int val;
    Node* next;        // next is a type of pointer variable to store address(mixed datatype)

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);


    // Creation of linked list
    a.next=&b;
    b.next=&c;
    c.next=&d;

    // cout<<a.val<<endl;   // simplest way to access nodes
    // cout<<a.next<<endl;
    // cout<<d.val<<endl;
    cout<<c.next<<endl;

    // Accessing adresses
    // cout<<(a.next)<<endl;          //address of b
    // cout<<(*a.next).val<<endl;     // dereference operator is used to access the value
    //cout<<d.next->val<<endl;

    cout<<a.next->next<<endl;         // accessing address of c by a
    cout<<(a.next->next)->val<<endl;
    cout<<(a.next->next)->next<<endl;  // accessing address of d by a
    cout<<((a.next->next)->next)->val<<endl;

}