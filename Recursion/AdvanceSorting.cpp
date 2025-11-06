#include<iostream>
#include<vector>
using namespace std;
// This is Advance Sorting using recursion.
// The time complexity decreases from O(n^2) to O(nlogn)
// Which is much much better.
// it is kind of binary search , what do we do here is to break the executable space into smaller pieces and then sort them and then MERGE SORT them together.
// in the end we get sorted array as full.
void merge(vector<int>a,vector<int>b,vector<int>&ans){
    int i=0,j=0,k=0;
    int m = a.size(), n = b.size();

    while(i<m && j<n){
        if(a[i]<=b[j]){
            ans[k++]=a[i++];
        } else{
            ans[k++]=b[j++];
        }
    }
    while(i<m) ans[k++]=a[i++];
    while(j<n) ans[k++]=b[j++];
    
    return;
}
void mergeSort(vector<int>&test){
    int n = test.size();
    if(n==1) return;
    int n1 = n/2, n2=n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        a[i]=test[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=test[i+n1];
    }
    mergeSort(a);
    mergeSort(b);

    merge(a,b,test);

    return;
}
int main(){
    // int arr1[] = {1,4,5,8};
    // int arr2[]= {2,3,6,9,10};
    // int n1 = sizeof(arr1)/sizeof(arr1[0]);    
    // int n2 = sizeof(arr2)/sizeof(arr2[0]);
    // vector<int>a(arr1,arr1+n1);
    // vector<int>b(arr2,arr2+n2);
    int arr[]={5,1,3,0,4,9,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>test(arr,arr+n);
    vector<int> ans;

    cout<<"Original array : ";
    //merge(a,b,ans);
    for(int ele : test){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    mergeSort(test);
    cout<<"MergeSorted array : ";
    for(int ele : test){
        cout<<ele<<" ";
    }

    return 0;
}