#include<iostream>
using namespace std;
void hanoi(int n,char a,char b, char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<"move: "<<n<<" from ["<<a<<" -> "<<c<<"]"<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    cout<<"Please input number of discs MASTER: ";
    int n;
    cin>>n;
    cout<<"Below are Steps to Solve this Tower, Master! : "<<endl;
    hanoi(n,'A','B','C');
}