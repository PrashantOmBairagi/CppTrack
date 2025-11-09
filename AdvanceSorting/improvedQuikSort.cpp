#include<iostream>
#include<vector>
using namespace std;
// DATED: 09-11-2025 ; Jabalpur
//  using RANDOMIZED PIVOT POINT helps the worst case Time Complexity of the quickSort algorithm. (if the given array is already sorted T.C. tends to reach O(n^2) which is very bad.) hence Random pivot point is chosen instead of First Element of every sub-array.

int partition(vector<int>&arr,int sidx,int eidx){
    int count = 0;
    for(int i=sidx;i<=eidx;i++){
        //if(arr[(sidx+eidx)/2]==arr[i]) continue;
        if(arr[(sidx+eidx)/2]>=arr[i]){
            count++;
        }
    }
    
    swap(arr[(sidx+eidx)/2],arr[count+sidx]);
    return count+sidx;
}
void quickSort(vector<int>&arr,int sidx,int eidx){
    if(sidx>=eidx) return;
    
    int pivot = partition(arr,sidx,eidx);   
    int p=sidx,q=eidx;
    while(p<q){
        if(arr[p]>arr[pivot] && arr[q]<arr[pivot]){
            swap(arr[p++],arr[q--]);
        }
        else if(arr[p]<arr[pivot]){
            p++;
        } else if(arr[q]>arr[pivot]){
            q--;
        }
    }
    quickSort(arr,sidx,pivot-1);
    quickSort(arr,pivot+1,eidx);
    return;
    
    
}
int main(){
    vector<int>arr={1,2,8,2,7,6,3,4};
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    quickSort(arr,0,arr.size()-1);
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}