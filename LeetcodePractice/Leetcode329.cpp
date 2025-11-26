#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfThree(int n){
    if(n<=0) return false;
    double ln = log(n)/log(3);
    if(floor(ln)==ln) return true;
    return false;
}
int main(){
    int n = 82;
    cout<<isPowerOfThree(n);

}