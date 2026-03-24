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

void traverse(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"NULL";
}


void dSpecific(Node* &head , int pos){
    if (pos<0){
        cout<<"position not possible"<<endl;
        return;
    }

    if (head==nullptr){
        cout<<"list is empty"<<endl;
        return;
    }

    if (pos==0){
        Node* temp = head;
        head= head->next;
        delete temp;
        return;
    }

    int count = 0;
    Node* temp = head;

    while(temp!=nullptr && count <pos-1){
        temp = temp->next;
        count++;
    }

    if (temp==nullptr || temp->next==nullptr){
        cout<<"position not available";
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

int main (){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* node6 = new Node(60);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    dSpecific(head , 3);
    traverse(head);

}