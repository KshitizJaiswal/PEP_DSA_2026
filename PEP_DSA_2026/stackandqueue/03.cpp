#include<iostream>
#include<stack>
using namespace std;

void reverseString(string &str){
    stack<string> st;
    for(int i=0;i<str.length();i++){
        string ans="";
        while(str[i]!=' ' && i<str.length()){
            ans+=str[i];
            i++;
        }
        st.push(ans);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    //stack<int> st;
    //print all elements of stack
    //st.push(1);
    //st.push(2);
    //st.push(3);

   // while(st.top()!= 0){
     //   cout<<st.top()<<" ";
       // st.pop();
    //}
    string str="hello world !";
    reverseString(str);
}