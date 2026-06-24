#include<iostream>
using namespace std;

class Node{            // User Defined Datatype
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;

    }
};

class LinkedList{     // User Defined Data Structure
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = NULL;
        tail = NULL;
        size =0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if (size==0){
            head=tail=temp;
        }
        else{
            tail->next = temp;
            tail=temp;
        }
        size++;

    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"  "<<temp->next<<endl;
            temp = temp->next;
        }
        
    }

};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();

}
