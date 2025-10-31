#include<iostream>
#include<string>
using namespace std;

int main(){
string str;
getline(cin, str);

cout<<str<<endl;

str[8]='o';
cout<<str<<endl;

}