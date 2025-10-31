#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;


int helper(vector<int>arr1,vector<int>arr2,int an1,int an2,int ans){

    for(int i=0;i<an1;i++){
        for(int j=0;j<an2;j++){
            if(ans<common(arr1[i],arr2[j])){
                ans=common(arr1[i],arr2[j]);}
        }
    }
    return ans;
}
int main(){
    int ans = 0;
    int arr1 [] = {1,10,100}, arr2 []= {1000};
    int an1 = sizeof(arr1)/sizeof(arr1[0]);
    int an2 = sizeof(arr2)/sizeof(arr2[0]);
    helper(arr1,arr2,an1,an2,ans);
}