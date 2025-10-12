#include<iostream>
using namespace std;
int pwr(int a, int n){
    if(n==0) return 1;
    return a*pwr(a,n-1);
}
int main(){
    int a,n;
    cout<<"Give me Sunshine: ";
    cin>>a>>n;
    cout<<pwr(a,n);
} 