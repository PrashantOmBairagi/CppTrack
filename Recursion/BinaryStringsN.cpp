#include<iostream>
#include<string>
using namespace std;
int n=3;
void binarystring(string s){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    binarystring(s+'0');
    if(s.empty() || s.back()!='1')binarystring(s+'1');
}
int main(){
    binarystring("");
}