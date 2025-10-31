#include<iostream>
using namespace std;
int sum(int i, int n){
    if(n==0) return i; // if you do i=i+n; this will update the local i and the next recursive call will send global i to the function not the local that you updated!!
    return sum(i+n, n-1);
}
int main(){
    int n,i=0;
    cout<<"Give me Some Sunshine : ";
    cin>>n;
    cout<<sum(i,n);
}

