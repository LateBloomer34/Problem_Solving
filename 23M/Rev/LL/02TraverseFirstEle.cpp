#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node (int val){
        value = val;
        next = nullptr;
    }
};

void traverse(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void firstOfList(Node* head){
    if(head==nullptr){
        cout<<"list is empty";
    }
    cout<<head->value;
}

int main (){
    Node* node1= new Node(10);
    Node* node2= new Node(20);
    Node* node3= new Node(30);
    Node* node4= new Node(40);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // traverse(head);
    firstOfList(head);
   
}