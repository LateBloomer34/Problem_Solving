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

void iterate(Node* head){
    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"NULL";
}

void last(Node* &head, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

int main (){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    last(head, 7);
    iterate(head);
    
}