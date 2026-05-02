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

void iterate(Node* result){
    Node* temp = result;
    while(temp!=nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<"NULL";
}

Node* add(Node* head, Node* head1){
    Node* newNode = new Node(0); // dummy 
    Node* head2 = newNode;  // result builder

    int carry = 0;

    while(head!=nullptr || head1!=nullptr || carry){
        int sum = carry;
        if (head!=nullptr){
            sum = sum+head->value;
            head= head->next;
        }
        if (head1!=nullptr){
            sum = sum+head1->value;
            head1= head1->next;
        }
        carry = sum/10;

        head2->next = new Node(sum%10);
        head2 = head2->next;
    }
    return newNode->next;
}


int main (){
    Node* node1 = new Node (2);
    Node* node2 = new Node (4);
    Node* node3 = new Node (3);

    Node* head = node1;
    node1->next = node2;
    node2->next = node3;


    Node* node11= new Node(5);
    Node* node12= new Node(6);
    Node* node13= new Node(4);

    Node* head1 = node11;
    node11->next = node12;
    node12->next = node13;

    Node* result = add(head , head1);
    iterate(result);
}