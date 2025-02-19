#include<iostream>
#include<vector>

using namespace std;

int main(){

int arr[] = {6,3,2,4,5,7,1,5};

vector<int>check(8,0);

for(int i=0;i<=7;i++){
    if (check[arr[i]]==0){
    check[arr[i]]=1;} 
    else if(check[arr[i]]==1){
        cout<<arr[i]<<endl;
    }
    
}
for (int i = 0; i < 8; i++)
{
  cout<<arr[i];
}
cout<<endl;
for (int i = 0; i < 8; i++)
{
  cout<<check[i];
}
cout<<endl;

//here we are using the concept of hashing to find the duplicate element in the array
}
