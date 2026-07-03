#include <iostream>
using namespace std;

bool search(int arr[][3], int row, int col, int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}
//calculate and print the sum of each row.
void printRowSum(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        int sum = 0,currSum=0; 
        for(int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
            
        }
        cout << sum << endl;
    }
}

//print the value of max sum and slaso its row index and if multible rows have same max sum, return the index of last row

void printMaxRowSum(int arr[][3], int row, int col) {
    int maxSum = 0; 
    int maxRowIndex = -1;

    for(int i = 0; i < row; i++) {
        int currentSum = 0; 
        
        for(int j = 0; j < col; j++) {
            currentSum += arr[i][j];
        }
        
        if(currentSum >= maxSum) {
            maxSum = currentSum;
            maxRowIndex = i;
        }
        cout<<maxSum<<" "<<maxRowIndex<<endl;
    }
}
//output {6,13,8,3,16,12,1,11,4,15,5,9,7,14,2,10}
void printPattern(int arr[][3],int row, int col) {
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    //int target = 6;
    //search(arr, 3, 3, target);
    
    //printRowSum(arr, 3, 3);

    //printMaxRowSum(arr, 3, 3);
}