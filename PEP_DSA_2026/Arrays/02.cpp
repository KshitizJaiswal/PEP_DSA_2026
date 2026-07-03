#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec1={1,2,3,4,5};
//cout<<vec1[13]<<endl;
//cout<<vec1.at(13)<<endl;

//write pushback,popback,size,clear
vec1.push_back(6);
for(int i:vec1){
    cout<<i<<endl;
}

vec1.pop_back();
for(int i:vec1){
    cout<<i<<endl;
}

}