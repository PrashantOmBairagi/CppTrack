#include<iostream>
using namespace std;

int main(){
    
  int n;
  cin>>n;
  for (int i=1;i<n;i++){
   cout<<1;
   if(i>=2 && i%2!=0){
    for(int j=0;j<i-2;j++){
      cout<<1;
    }
   }
   if(i>3 && i%2==0){
    for(int j=0;j<i-2;j++){
      cout<<0;
    }
   }

   if(i>=2)
   cout<<1;
   cout<<endl;
   }



}