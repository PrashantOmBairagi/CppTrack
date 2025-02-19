#include<iostream>
using namespace std;

int main(){
      
int marks[]={90,22,34,35,32,55,28,44,33};
// cout<<marks[0];
int n = sizeof(marks)/sizeof(marks[0]);
cout<<sizeof(marks[0])<<endl;
cout<<n<<endl;

for( int i = 0; i<n; i++){
  if(marks[i]<35) cout<<i<<" "<<"="<<marks[i]<<endl;
}


}