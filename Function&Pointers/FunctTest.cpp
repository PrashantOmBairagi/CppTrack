#include<iostream>
using namespace std;

// int ldigi(int n){
//      for(int i=1;n>9;i++){
//         n/=10;
//         }
// return n;
// }
// int main(){

// cout<<("Enter the no. you wanted last and first digit of:")<<endl;
// int x;
// cin>>x;
// cout<<("the no. you entered is :")<<x<<endl;
// if(x<9) cout<<("The last snd first digit is: ")<<x<<endl;
// else {cout<<("first digit is:")<< ldigi(x)<<endl;
// cout<<("The last digit of no. is :")<< x%10;
//  }


// }


// void find(int n,int*ptr1,int*ptr2){
//     *ptr1=n%10;
// while(n>9){
//     n/=10;
// }
// *ptr2=n;
// }


// int main(){
// cout<<("enter no.:");
// int n;
// cin>>n;
// int fd,ld;
// int*ptr1=&fd;
// int*ptr2=&ld;
// find(n, ptr1,ptr2);

// cout<<fd<<endl;
// cout<<ld<<endl;
// }
void find(int n,int &fd,int &ld){
    fd=n%10;
while(n>9){
    n/=10;
}
ld=n;
}
int main(){
cout<<("enter no.:");
int n;
cin>>n;
int fd,ld;
find(n,fd,ld);

cout<<fd<<ld;


}