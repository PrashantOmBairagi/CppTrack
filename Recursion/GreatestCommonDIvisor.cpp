#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a,b;
    // cout<<"My Lord! Provide with no. A: ";
    // cin>>a;
    // cout<<"My Lord! Provide with no. B: ";
    // cin>>b;
    cout<<endl<<"The Greatest common Divisor mylord is :"<<gcd(45,27);
    
    return 0;
}