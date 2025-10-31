#include <iostream>
using namespace std;
int factorial(int y){
    int j=1;
    for(int i=1;i<=y;i++){
        j*=i;
    }
    return j;
}

int main(){
cout<<("Enter a number: ");
int x;
cin>>x;

int fact = factorial(x);
cout<<fact;


}