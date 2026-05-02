#include<iostream>
using namespace std;
#include <unordered_set>

class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value = val;
        next = nullptr;
    }
};


void iterate(Node* head){
    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"NULL";
}

void remDupli(Node* &head){
    if (head ==nullptr){
        cout<<"list is empty"<<" ";
        return;
    }
    unordered_set<int>setData;
    Node* temp = head;
    Node* prev = nullptr;

    
    while(temp!=nullptr){
        if (setData.find(temp->value) != setData.end()){ // setData ALREADY contains temp->value ✅ (duplicate)
            
            // if value found inside setData
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
        }
        else{
            // setData.find(temp->value) == setData.end()
            // setData DOES NOT contain temp->value ✅ (new value)
            // “find()-  ko value nahi mili, isliye wo end() return kar raha hai”

            // if value not found inside the setData
            
            setData.insert(temp->value);
            prev = temp;
            temp= temp->next;
        }
    }
}

int main (){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(1);
    Node* node4 = new Node(3);
    Node* node5 = new Node(2);
    Node* node6 = new Node(1);
    
    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    remDupli(head);
    iterate(head);
}

