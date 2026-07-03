#include<iostream>
using namespace std;
//call by value and call by reference:
//here what happen if we pass num, it copiy the value of num and then it run the function ao, thr output is 20 inside, outside is 10, while when it pass with & it tajke the original value.
// void doubleTheValue(int &num){
//     num*=2;
//     cout<<"inside :"<<num<<endl;

// }

int main()
{
    // int num=10;
    // doubleTheValue(num);
    // cout<<"outside :"<<num<<endl;

    //pointers
    //pointer are the special variable which store the address of another variable.

    int a=10;
    int *ptr=&a;

    cout<< &a <<endl;
    cout<< *ptr <<endl;
    cout<< *(ptr+1) <<endl;
}