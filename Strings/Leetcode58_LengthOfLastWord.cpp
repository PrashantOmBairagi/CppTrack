#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int lengthOfLastWord(string s){
    int count = 0;
    bool flag = false;
    for(int i=s.size();i>=0;i--){
        if(isalnum(s[i])){ 
            flag=true;
            count++;
        }
        if(s[i]==' ' && flag) return count;
        
    }
    return count;
}
int main(){
    string s = "luffy is still joyboy";
    cout<<lengthOfLastWord(s);
}