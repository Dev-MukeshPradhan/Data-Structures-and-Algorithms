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

void RecDisplay(Node* head){
    if(head==NULL) return;
    cout<<head->val<<endl;
    RecDisplay(head->next);
}

int CountNodes(Node* head){
    int count =0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
        
    }

    return count;

}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    RecDisplay(a);
    CountNodes(a);
    cout<<"Number of nodes are:"<<CountNodes(a);
}