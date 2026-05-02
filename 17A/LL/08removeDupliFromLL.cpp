#include<iostream>
using namespace std;
#include<unordered_set>

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
    }
    cout<<"NULL";
}

void remDupli(Node* &head){
    if (head ==nullptr){
        cout<<"list is empty";
    }

    unordered_set<int>setData;

    Node* temp = head;
    Node* prev = nullptr;

    while(temp!=nullptr){
        if (setData.find(temp->value)!=setData.end()){
            // value present inside the setData
            prev->next = temp-> next;
            delete temp;
            temp = prev->next;
        }
        else{
            //value not present inside setData
            setData.insert(temp->value);
            prev= temp; // prev is the last valid (non-deleted) node.
            temp = temp->next;
        }
    }
    for (auto x:setData){
        cout<<x<<" ";
    }
    cout<<endl;
}


int main (){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(1);
    Node* node4 = new Node(3);
    Node* node5 = new Node(4);
    Node* node6 = new Node(2);
    Node* node7 = new Node(2);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;

    remDupli(head);
    traverse(head);

}