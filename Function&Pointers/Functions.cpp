#include <iostream>
using namespace std;
// finding highest common factor

int hcf(int x, int y){
    int f;
for(int i=1;i<=min(x,y);i++){
    if(x%i==0 && y%i==0){
    f=i;}}


return f;
}
int main(){
  int x,y;
cout<<"Give numbers you want to find HCF: ";
cin>>x;
cout<<"Give numbers you want to find HCF: ";
cin>>y;
cout<<"HCF of the numbers is :"<<hcf(x,y);

   



}