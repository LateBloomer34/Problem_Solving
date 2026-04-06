#include<iostream>
using namespace std;
#include<vector>

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

    }cout<<"NULL";
}

void remove(Node* &head){
    Node* temp = head;

    while(temp!=nullptr && temp->next!=nullptr){
        if (temp->value == temp->next->value ){
            Node* con = temp->next;
            temp->next = con->next;
            delete con;
        }
        else{
        temp = temp->next;
        }
    }
}

int main (){
    Node* node0 = new Node(1);  
    Node* node1 = new Node(1);  
    Node* node2 = new Node(1);  
    Node* node3 = new Node(2);  
    Node* node4 = new Node(3);  
    Node* node5 = new Node(4);  
    Node* node6 = new Node(4);  
    Node* node7 = new Node(5);  

    Node* head = node0;
    node0->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;

    remove(head);
    traverse(head);
}