#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int value;

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

void remove(Node* &head , int pos){
    if (head==nullptr){
        return ;
    }

    int count = 0;
    Node* temp1 = head;
    while(temp1!=nullptr){
        count++;
        temp1 = temp1->next;
    }

    // if position is not valid
    if (pos>count){
        return;
    }

    // if need to delete first elemenet (nth) , delete head
    if (pos==count){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    int steps = count-pos-1;
    Node* temp = head;
    for (int i = 0 ; i< steps ; i++ ){
        temp = temp->next;
    }
    Node* toBeDelete = temp->next;
    temp->next = toBeDelete->next;
    delete toBeDelete;
    
}

int main (){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    Node* node7 = new Node(7);
    Node* node8 = new Node(8);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;

    remove(head , 3);
    iterate( head);
}