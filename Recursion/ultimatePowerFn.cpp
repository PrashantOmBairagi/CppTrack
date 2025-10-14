#include<iostream>
using namespace std;
double pwr(double x, int n){
       if(n==1) return x;
        if(n==0) return 1;
        if(n==-1) return 1/x;
        if(n>0) {double ans=pwr(x,n/2);
            if(n%2==0) return ans*ans;
            if(n%2!=0) return ans*ans*x;}
        if(n<0){double ans=pwr(x,n/2);
            if(n%2==0) return ans*ans;
            if(n%2!=0) return ans*ans/x;}
        return 1;
}
int main(){
    cout<<"Please Input Base Maharaj (input can be int or float both): ";
    double x; int n;
    cin>>x;    
    cout<<"Please Input Power Maharaj (input can be +ve | -ve both): ";
    cin>>n;
    cout<<pwr(x,n);
}