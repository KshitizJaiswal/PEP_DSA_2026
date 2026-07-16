#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int n){
        data=n;
        left=NULL;
        right=NULL;
    }
};

void levelOrder(Node* root){
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* frontNode=q.front();
        q.pop();

        if(frontNode!=NULL){
            cout<<frontNode->data<<" ";

        if(frontNode->left) q.push(frontNode->left);
        if(frontNode->right!=NULL) q.push(frontNode->right);
    }
    else{
        if(!q.empty()) {
            q.push(NULL);
    }
}
}
int main(){

}