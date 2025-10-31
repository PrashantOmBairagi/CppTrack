#include<iostream>
using namespace std;

int swap(int *x , int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}
int main(){
 int x,y;
    cin>>x;
    cin>>y;
    int *p1=&x;
    int *p2=&y;
    swap(x,y);

    
cout<<x<<" "<<y;


}