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

void iterate(Node *head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->value<<" "<<endl;
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main (){
    Node *node1 = new Node(10);      
    Node *node2 = new Node(20);
    Node *node3 = new Node(25);
    Node *node4 = new Node(30);
    Node *node5 = new Node(46);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    iterate(head);
}


