#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value =val;
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

void dSpecific(Node* &head , int pos){
    if (pos<0){
        cout<<"position not available"<<endl;
        return;
    }
    if (head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
     
    if (pos==0){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int count = 0;
    Node* temp = head;
    
    
    while(temp!=NULL && count<pos-1){
        temp = temp->next;
        count++;
       
    }

    if (temp==nullptr || temp->next==nullptr){
        cout<<"position not available"<<endl;
        return;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
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

    dSpecific(head, 3);
    traverse(head);
}