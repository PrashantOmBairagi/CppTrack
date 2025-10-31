#include<iostream>
#include<vector>
using namespace std;
// int mxval(vector<int>&arr,int max, int n){
//     if(n==0) return 0;
//     if(arr[n-1]>max) max=arr[n-1];
//     mxval(arr,max,n-1);
//     return max;
// }
int mxopt(vector<int>&arr,int n){
    if(n==0) return INT_MIN;
    return max(arr[n-1],mxopt(arr,n-1));
}
int main(){
    vector<int>arr={1,4,4,3,2,6,0,3,9,31};
    int max=INT_MIN;
    int n=arr.size();
    //cout<<mxval(arr,max,n);
    cout<<mxopt(arr,n);
}