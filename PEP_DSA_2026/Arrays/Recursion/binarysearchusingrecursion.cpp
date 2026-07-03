#include<iostream>
using namespace std;
int binarysearch(int arr[], int start, int end, int key){
    if(start>end) return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]== key) return mid;
    if(arr[mid]>key) return binarysearch(arr, start, mid-1, key);
    return binarysearch(arr, mid+1, end, key);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    cout<<binarysearch(arr, 0, size-1, key)<<endl;
}