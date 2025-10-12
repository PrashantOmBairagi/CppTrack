#include<iostream>
using namespace std;

int pwr(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    int ans = pwr(x,n/2);
    if(n%2==0)return ans*ans;
    if(n%2!=0)return ans*ans*x;
}
int main(){
    cout<<"Please Input Base Maharaj: ";
    int x,n;
    cin>>x;    
    cout<<"Please Input Power Maharaj: ";
    cin>>n;
    cout<<pwr(x,n);
}