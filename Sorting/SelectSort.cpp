#include<iostream>
#include<vector>    
using namespace std;

int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The Selection UNSorted array is : " ;
    for(int i=0;i<n;i++){
        cout<<arr[i];};
    cout<<endl;
    for (int i=0; i<n-1;i++){
        int minimum = arr[i];
        for (int j=i; j<n;j++){
            if (arr[j] < minimum) {
                minimum = arr[j];
                swap(arr[i],arr[j]);
            } 
        } 
        
    }
    cout<<"The Selection Sorted array is : " ;
    for(int i=0;i<n;i++){
     cout<< arr[i];
    }
}  