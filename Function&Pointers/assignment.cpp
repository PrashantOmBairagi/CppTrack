#include<iostream>

using namespace std;
int main(){

    int i = 60, n = 300;
    int count=0;
  while (i <= n){
    count++;
    i = i+2;
    n = n-3; 
  }
 cout<<count;
}


