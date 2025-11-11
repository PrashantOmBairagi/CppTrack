#include<iostream>
using namespace std;
// DATED : 11-NOV-2025 : Jabalpur
// Learning Cycle sort , it has TC. of O(n) only but it has its limit the given data array must be continuous from either 1 to n OR 0 to N OR OR we are required to work on some continous part of Any data. 
int main(){
    int arr[] = {4,2,3,1,7,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int ele : arr){
        cout<<ele<<" ";
    } cout<<endl;
    
    int i = 0;
    while (i<n){
        int correctIdx = arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    } cout<<endl;
    
}