#include<iostream>
#include<vector>
using namespace std;
void printarr(vector<int> &arr,int n){
     if(n==0) return;
     printarr(arr,n-1);
     cout<<arr[n-1]<<" ";
}
int main(){
    vector<int>arr={2,5,3,9,1,0,5,6,5};
    printarr(arr,arr.size());
    cout<<endl<<"PRASHANT is in Love with Recursion :";
    return 0;
}