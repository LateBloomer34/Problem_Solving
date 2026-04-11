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

void mid (Node* &head , int pos , int val){
    Node* newNode = new Node(val);

    if (pos==0){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    int count =0;

    while(temp!=nullptr && count<pos-1){
        temp = temp->next;
        count++;
    }
    if (temp->next==nullptr){
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

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
    
    mid(head ,4 ,  8);
    iterarte(head);
}