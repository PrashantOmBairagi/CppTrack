#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfThree(int n){
    if(n<=0) return false;
    double ln = log(n)/log(3);
    return fabs(ln - round(ln)) < 1e-10 ;
}
int main(){
    int n = 82;
    cout<<isPowerOfThree(n);
}