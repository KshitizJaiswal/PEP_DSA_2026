#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next= NULL;
    }

};


void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head==NULL){
        head=node;
        node->next=head;
        return;
    }
    Node* temp= head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
}


void insertAtBegning(Node* &head, int val){
    Node* node = new Node(val);
    Node* temp=head;

    if(head==NULL){
        node->next=node;
        node=head;
        return;
    }

    while(temp->next != head){
        temp=temp->next;
    }
    node->next=head;
    temp->next=node;
    head=node;

}

void deleteAtEnd(Node* &head){
    Node* temp= head;

    if(head==NULL){
        return;
    }
    if(temp->next == head){
        delete temp;
        head=NULL;
        return;
    }
    while(temp->next->next != head){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=head;
}

int main(){

}
