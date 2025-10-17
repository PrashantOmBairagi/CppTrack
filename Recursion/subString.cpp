#include<iostream>
#include<string>
using namespace std;

void subs(string ans,string original){
    if(original == ""){ 
        cout<<ans<<endl;
        return;}
    char ch=original[0];
    subs(ans+ch,original.substr(1));
    subs(ans,original.substr(1));
    

}
int main(){
    string s="abc";
    int n = s.size();    
    subs("" , s);
}