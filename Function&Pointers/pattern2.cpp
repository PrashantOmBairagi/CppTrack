#include<iostream>
using namespace std;
int main(){
    
    int n ;
    cin>>n;

    for(int i=0; i<n;i++){
        for(int j =1; j<=i ; j++){
            if((j!=1 && j!=i) && i%2==0)
            cout<<0;
            else cout<<1;
        }
        cout<<endl;
    }
 


}