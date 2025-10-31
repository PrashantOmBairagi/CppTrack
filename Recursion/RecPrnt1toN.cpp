#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
    return;
}
int main(){
    int n,i=1;
    cout<<"Give me Some Sunshine : ";
    cin>>n;
    print(i,n);
}

