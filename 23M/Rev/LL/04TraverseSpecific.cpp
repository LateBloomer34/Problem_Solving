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

void specific(Node* head , int point){
    
    if (head == NULL){
        cout<<"list is empty";
        return;
    }
    if (point<0){
        cout<<"invalid position";
        return;
    }
    
    int pos = 0;
    Node* temp = head;
    while(temp!=nullptr){
        if (pos == point){
            cout<<temp->value;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout<<"position is not avavilable ";
    
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
    specific(head,4);
}