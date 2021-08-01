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

void insertAtTail(Node* &head , int val){
     
    Node* temp = head;
    Node* new_Node = new Node(val);
    while (temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = new_Node;
}
  
void Print(Node* temp){
    while(temp!=nullptr){
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    
    Node* head =nullptr;
    
    InsertAtBegin(head , 12);
    InsertAtBegin(head,13);
    Print(head);
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   insertAtTail(head,4);
   
   Print (head);
   
  
  return 0;
}