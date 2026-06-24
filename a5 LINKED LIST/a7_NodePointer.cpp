#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;

    }
};

void Display(Node* head){
    Node* temp = head;
    while(temp!=NULL){      // temp is actually the address of the node not the address of the next node stored in any node(There are actaully two addresses in a node 1. adress of the node itself 2. address of the next node , here we are checking address of the node)
        cout<<temp->val<<"  "<<temp->next<<endl;
        temp = (temp->next);       // temp->next = a->next
    }

}

int main(){
    Node* a = new Node(10);     // creation of nodes without names only with address i.e using pointer
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;                // initually the address was NULL now we are updating the addresses stored of the next node
    b->next = c;
    c->next = d;               // only the address at d remians NULL

    Display(a); 
}

