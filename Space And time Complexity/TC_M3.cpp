#include<iostream>
#include<vector>

using namespace std;

int main(){
int arr[] = {6,3,2,4,5,7,1,5};

int n = sizeof(arr) / sizeof(arr[0]);  
int sum = ((n-1) * (n)) / 2;  
cout<<sum<<endl;
for(int i=0;i<=7;i++){
    sum-=arr[i];
}
cout<<sum*(-1)<<endl;
//here we used the sum concept because we knew that the sum of n natural numbers is n*(n+1)/2,
//and whatever number gets repeated we have additional sum of that number, so we subtract the sum of n natural numbers from the sum of the array to get the repeated number.
}