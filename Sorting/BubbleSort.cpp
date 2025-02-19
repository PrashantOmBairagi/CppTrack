#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> arr (5);
arr = {5,4,3,2,1};
int n =arr.size();
for (int i=0;i<n;i++){
    for(int j=0;j<(n-1-i);j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<<"Sorted array is: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}