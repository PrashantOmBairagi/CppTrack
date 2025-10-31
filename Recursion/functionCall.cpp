#include<iostream>
using namespace std;

// WAP using recursion to print factorial of 'n' !!
int fact(int n) {
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
cout<<"Give me sunshine:";
cin>> n;
cout<<fact(n);
}