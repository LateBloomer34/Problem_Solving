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
    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void dLast(Node* head){
    if (head ==nullptr){
        cout<<"list is empty";
        return;
    }
    if(head->next==nullptr){
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while(temp->next->next!=nullptr){
        temp = temp->next;   
    }
    delete temp->next;
    temp->next = nullptr;
}

int main (){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;

    dLast(head);
    traverse(head);

}