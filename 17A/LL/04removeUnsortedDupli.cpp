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

int main (){
    Node* node1 = new Node(1);

    Node* head = node1;

    iterate(head);
}