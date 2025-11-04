#include<iostream>
#include<string>
using namespace std;
// LEETCODE 38 Count and Say {Recursion + String Question}
string countAndSay(int n){
    if(n == 1) return "1";
    string str = countAndSay(n-1);
    string ans = "";
    int freq = 1;
    char ch = str[0];
    
    for(int i=1;i<str.length();i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{
            ans+=to_string(freq);
            ans+=ch;
            freq=1;
            ch=str[i];
        }
    }
    ans += to_string(freq);
    ans += ch;
    return ans;
}
int main(){
    int n = 6;
    cout<<countAndSay(n)<<endl;
    n=7;
    cout<<countAndSay(n)<<endl;
}