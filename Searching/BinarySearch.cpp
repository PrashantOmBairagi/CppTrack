#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr;
    arr={1,3,5,2,1};
    int n=arr.size();

    int lo =0;
    int hi = n-1;
    while(lo<=hi){
      int mid=lo+(hi-lo)/2;
      if( arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
       cout<<arr[mid];
    
      if(arr[mid]>arr[mid+1]) hi=mid-1;
      else lo=mid+1;
    };
    return 0;
}