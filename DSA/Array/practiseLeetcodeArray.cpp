 #include <iostream>
 #include<vector>
using namespace std;
bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;

        int i = 0;

        while (i + 1 < n && arr[i] < arr[i + 1]) i++;
        if (i == 0 || i == n - 1) return false;
        while (i + 1 < n && arr[i] > arr[i + 1]) i++;

        return i == n - 1;
    }
int main(){
    vector<int> arr={0,3,3,5,3,2};
    // for(int i=0;i<arr.size()-1;i++){
    //     if(arr[i]==arr[i+1]){
    //         cout<<"Not Mountain";
    //         return 0;
    //     }
    // }
    // int peakIdx=0;
    // int lo =0;
    // int hi = arr.size()-1;
    // while(lo<hi){
    //     int mid = lo + (hi-lo)/2;
    //     if(arr[mid-1]<arr[mid] && arr[mid+1]>arr[mid] ) lo=mid;
    //     if(arr[mid+1]<arr[mid] && arr[mid-1]>arr[mid]) hi=mid;
    //     if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) {
    //         peakIdx=mid; 
    //         break;
    //     }
    //     }
    //     cout<<peakIdx;
        // Call function to check mountain arrray:
        cout<<(validMountainArray?"Yes Its mountaina array":"no its not a mountain array");
}