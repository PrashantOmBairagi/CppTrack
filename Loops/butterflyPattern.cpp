#include <iostream>
using namespace std;
int main (){
int n = 8;
for(int i=0; i<n;i++){
    if(i<n/2){
    // str
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    //spc
    for(int k=0;k<(n-i*2-2);k++){
        cout<<" ";
    }
    // str
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
} else{
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    //spc
    for(int k=0;k<=(i*2-n-1 );k++){
        cout<<" ";
    }
    // str
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
}




}
}