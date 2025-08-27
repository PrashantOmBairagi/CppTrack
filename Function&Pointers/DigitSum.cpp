#include<iostream>
using namespace std;
int DigitSum(int l){
    int sum=0;
    while(l>0){
       sum += l%10;
       l /= 10;
    }
    return sum;
}
int main(){
int n;
cout<<"Please pass the number MyLord!\n";
cin>>n;
cout<<DigitSum(n)<<endl;


return 0;
}