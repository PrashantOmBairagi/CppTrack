#include<iostream>
#include<string>
using namespace std;
int main(){

string str = "hoops";
int count = 0;
cout<<str.length()<<endl;
for(int i=0;i<=str.length()-1;i++){
    if (str[i]==str[i+1]){
        i++;}
        else{count++;};

}
cout<<count<<endl;

}