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
}

Node* twoSum(Node* head1 , Node* head2){
    Node* newNode = new Node(0);
    Node* temp = newNode;
    int carry = 0;
    
    while(head1!=nullptr || head2!=nullptr ||carry){
        int sum = carry;
        if (head1!=nullptr){
            sum = sum+head1->value;
            head1= head1->next;
        }
        if (head2!=nullptr){
            sum = sum+head2->value;
            head2 = head2->next;
        }
        carry = sum/10;

        temp->next = new Node(sum%10);
        temp= temp->next;

    }
    return newNode->next;
}

int main (){
    Node* node1 = new Node(2);
    Node* node2 = new Node(4);
    Node* node3 = new Node(3);

    Node* head1 = node1;
    node1->next = node2;
    node2->next = node3;


    Node* node4 = new Node(5);
    Node* node5 = new Node(6);
    Node* node6 = new Node(4);

    Node* head2 = node4;
    node4->next = node5;
    node5->next = node6;

    Node* result = twoSum(head1 , head2);
    iterate(result);
}