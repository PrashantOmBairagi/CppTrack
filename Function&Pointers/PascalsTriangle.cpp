#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++)
    f *= i;
     return f;
}
int comb(int n, int r){
     int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"My Lord! Provide with no. of lines you want:";
    cin>>n;

    for(int i=0;i<=n-1;i++){
     for(int j=0;j<=i;j++){
    
    cout<<comb(i,j)<<" ";}
    
    cout<<endl;
}
}


