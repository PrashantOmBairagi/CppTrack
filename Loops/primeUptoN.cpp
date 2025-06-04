#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long i=2;
    while(i<n){
        bool isPrime = true;

        for(long long j=2; j<i; j++){
            if(i%j==0){
                isPrime=false;
            break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
    i++;
}}