#include<iostream>
using namespace std;

string reverseString(string str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}

int main(){
    string str = "Hello";
    cout << reverseString(str) << endl;
    
}