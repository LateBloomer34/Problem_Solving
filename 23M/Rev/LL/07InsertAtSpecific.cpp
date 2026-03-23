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

    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"NULL";
}

void insertP(Node* &head , int pos , int val){
    if (pos<0){
        cout<<"position is not possible";
        return;
    }

    Node* newNode = new Node(val);

    if (pos==0){
        newNode->next = head;
        head = newNode;
        return;
    }
    int count = 0;
    Node* temp = head;

    while(temp!=nullptr && count<pos-1){
        temp = temp->next;
        count++;
    }
    if (temp==nullptr){
        cout<<"position not possible";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
}

int main (){
    Node* node1 = new Node (10);
    Node* node2 = new Node (20);
    Node* node3 = new Node (30);
    Node* node4 = new Node (40);
    Node* node5 = new Node (50);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    insertP(head , 3, 35);
  traverse(head);
}