#include<iostream>
#include<vector>
using namespace std;
int ite=0;
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
    ite++;
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