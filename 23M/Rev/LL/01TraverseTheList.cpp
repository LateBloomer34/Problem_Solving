#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int val){
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
    cout<<"endlist";
}

int main (){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* head = node1;
    node1->next = node2;

    traverse(head);
}