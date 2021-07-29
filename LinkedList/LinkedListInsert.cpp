#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr; 
    }
};

void InsertAtBegin(Node*& head, int val){
    // if(head==nullptr){
    //     head =newNode(val);
    //     return;
    // }
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void Print(Node* temp){
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = nullptr;
    for(int i=0; i<=6;i++){
        InsertAtBegin(head,i);
    }
    Print(head);
    return 0;
}