#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value = val;
        next = NULL;
    }
};

void traverse(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp= temp->next;
    }
    cout<<"NULL";
}

void insertE(Node* head , int val){
    Node* newNode = new Node(val);

    if (head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;

    }
    temp->next = newNode;
}

int main (){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    insertE(head, 45);
    traverse(head);
}