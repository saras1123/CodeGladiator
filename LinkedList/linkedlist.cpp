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

void deleteHead(Node*& head){
     Node* todelete = head;
     head = head->next;

     delete todelete;           //1) "corner case" when we have only one node i.e head node and we have to delete that node.
}

void deletion(Node*& head, int val){

  if(head == nullptr){           //2) "corner case"

    return;
}


    if(head->next= nullptr){        //3)  first node = last node
     deleteHead(head);
     return;
}
    Node* temp = head;
    
    while(temp->next->data!=val){
        
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    
    delete todelete;
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
    // return 0;
    deletion(head,3);
    Print(head);
}