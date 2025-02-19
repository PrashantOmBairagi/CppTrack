#include<iostream>
using namespace std;

int main(){


string  s;
// string s = "vivek";      
getline(cin,s) ;
cout<<("Size is :")<<s.size()<<endl;
int count = 0;
for(int i=0; i<s[i]!='\0';i++){
    if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    count++;
}

cout<<count;

}