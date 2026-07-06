#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head==NULL){
        head=node;
        return;
    }
    Node* temp= head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=node;


}

void insertAtBegning(Node* &head, int val){
    Node* node= new Node(val);

    node->next=head;
    head=node;
}

void printEvenNodes(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data%2==0){
            cout<<temp->data<<" ";
        }
        temp=temp->next;
    }
}

void printNodes(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertAtPosition(Node* &head, int pos, int val){
    Node* node = new Node(val);
    Node* temp= head;

    if(pos==1){
        node->next=head;
        head=node;
        return;
    }
    for(int i=1; i<pos-1 && pos!= NULL;i++){
        temp=temp->next;
    }
    node->next=temp->next;
    temp->next=node;
}



void deleteAtEnd(Node* &head){
    Node* temp= head;

    if(head==NULL){
        return;
    }
    if(temp->next == NULL){
        delete temp;
        head=NULL;
        return;
    }
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}


void deleteAtBegning(Node* &head){
    if(head==NULL) return;
    Node* temp= head;
    head= head->next;
    delete temp;
}

void deleteAtposition(Node* &head, int pos){
    if(head==NULL) return;
    if(pos==1){
        Node* temp= head;
        head=head->next;
        delete temp;
        return;
    }

    Node* temp= head;
    for(int i=1;i<pos-1 && temp!= NULL;i++){
        temp=temp->next;
    }
    Node* deletenode= temp->next;
    temp->next= temp->next->next;
    delete deletenode;
}
int main(){
    Node* head = NULL;
    insertAtEnd(head, 1);


    printEvenNodes(head);
}