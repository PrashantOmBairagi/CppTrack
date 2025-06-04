#include<iostream>
using namespace std;

int main(){

int current1 = 0;
int current2 = 1;
int nextTerm = 0;
int n;
cout<<"Give upto which number you want fibonacci series to generate :";
cin>>n;
cout<<"0,1";

for(int i=0;i<n;i++){
    nextTerm = current1 + current2;
  if(nextTerm<n){ 
    current1 = current2;
    current2 = nextTerm;
    cout<<",";
    cout<<endl<<nextTerm;
    }
  else break;
}
}