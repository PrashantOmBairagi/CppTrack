#include<iostream>
#include<vector>
using namespace std;
// DATED: 09-11-2025 ; Jabalpur
//Today i am beginning to journal My learning in the code itself and i find it beautiful coz i have seen people Personalise their official codes that leave their mark on them.
// Today i learnt and wrote myself a whole code of sorting algorithm i.e. quickSort. It has Time complexity of O(nlogn) >= T.C. of Merge sort, and Space complexity of just O(log n) thats why it is also called inPlace Sorting.

int partition(vector<int>&arr,int sidx,int eidx){
    int count = 0;
    for(int i=sidx;i<=eidx;i++){
        if(arr[sidx]>arr[i]){
            count++;
        }
    }
    
    swap(arr[sidx],arr[count+sidx]);
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
    vector<int>arr={1,5,8,2,7,6,3,4};
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