#include<iostream>
using namespace std;

class myStack{
    public:
    int *arr;
    int top;
    int size;

    myStack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;

    }

    void push(int val){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
        }

        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        }
        top--;
    }

    void printStack(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

    void peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }
};

int main(){

    myStack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();

    st.printStack();

    st.isEmpty();

    st.peek();
    return 0;
}
