#include<iostream>
using namespace std;

// remove duplicate from sorted list;


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
        temp= temp->next;
    }cout<<"NULL";
}

Node* removeDupli(Node* head){
    Node* temp = head;

   while(temp!= nullptr && temp->next!=nullptr){
        if (temp->value == temp->next->value){
            Node* dup = temp->next;
            temp->next = temp->next->next;
            delete dup;
        }
        else{
            temp=temp->next;
        }
   } 
return head;
}

int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(1);
    Node* node3 = new Node(2);
    Node* node4 = new Node(3);
    Node* node5 = new Node(3);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    removeDupli(head);
//    Node* p   os = removeDupli(head);
    // traverse(pos);
traverse(head);
}