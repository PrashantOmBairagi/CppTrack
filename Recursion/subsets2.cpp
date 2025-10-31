#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> &arr){
    for (vector<int> ele : arr) { 
        cout << "{ ";
        for (int num : ele) { 
            cout << num << " ";
        }
        cout << "} ";
        cout << endl;
    }
    cout << endl;
}

void subsets2(vector<int>&arr, int n, vector<int>ans, vector<vector<int>>&finalanswer, bool flag){
    if(n==0){
        finalanswer.push_back(ans);
        return;
    }
    if(n<arr.size() && arr[n]==arr[n-1] && !flag){
        subsets2(arr,n-1,ans,finalanswer,false);
        return;
    }
    subsets2(arr,n-1,ans,finalanswer,false);
    ans.push_back(arr[n-1]);
    subsets2(arr,n-1,ans,finalanswer,true);
    return;
}

int main(){
    vector<int>arr ={1,3,3,9};
    //print(arr);
    vector<vector<int>>finalanswer;
    vector<int>ans;
    int n = arr.size();
    subsets2(arr,n,ans,finalanswer,true);

    
    print(finalanswer);
    return 0;
}