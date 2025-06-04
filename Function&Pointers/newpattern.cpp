#include<iostream>
using namespace std;

int main(){
     // 1 2 3 4 5 
     // 2 2 3 4 5
     // 3 3 3 4 5
     // 4 4 4 4 5
     // 5 5 5 5 5
    int n;
    cin>>n;
   
     for(int i=1; i<=n;i++){
        int count =i+1;
        
        for(int j=1; j<=i; j++){
          cout<<i<<" ";
         }
        for(int k=1;k<=n-i;k++){
            cout<<count<<" ";
            count++;
        }


            cout<<endl;
        }
        
        
}





