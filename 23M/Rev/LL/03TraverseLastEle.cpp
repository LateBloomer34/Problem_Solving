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

void lastOfList(Node* head){
    if (head ==NULL){
        cout<<"list is empty";
        return;
    }
    Node* temp = head;
    int res;
    while(temp!=NULL){
        res = temp->value;
        temp = temp->next;
    }
    cout<<res<<endl;
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
    lastOfList(head);
}