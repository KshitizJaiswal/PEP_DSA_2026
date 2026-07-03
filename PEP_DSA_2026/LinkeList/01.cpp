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
int main(){
    Node* head = NULL;
    insertAtEnd(head, 1);

    printEvenNodes(head);
}