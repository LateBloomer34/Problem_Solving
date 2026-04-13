#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node (int val){
        value = val;
        next = NULL;
    }
};

void iterarte(Node* head){
    Node* temp = head ;

    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;

    }
    cout<<"NULL";
    cout<<endl;
}

void delHead(Node* &head){
    if (head==nullptr){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
} 


int main (){
    Node* node1 = new Node(2);
    Node* node2 = new Node(3);
    Node* node3 = new Node(4);
    Node* node4 = new Node(5);
    Node* node5 = new Node(6);
    Node* node6 = new Node(7);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    
    delHead (head);
    iterarte(head);
}