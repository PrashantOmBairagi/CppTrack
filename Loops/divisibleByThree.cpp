#include<iostream>
using namespace std ;
int main (){
cout<<"Please provide a number :";
int n;
cin>>n;
int sum=0;

for(int i=1;i<=n;i++){
    if(i%3==0){
        sum +=i;
    }
}
cout<<sum;


}