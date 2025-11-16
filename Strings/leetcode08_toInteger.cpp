#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int myAtoi(string s) {
    bool frntSpace = true;      
    bool positive = true;       
    string ans = "";

    for (int i = 0; i < s.size(); i++) {

           
        if (frntSpace && s[i] == ' ')
            continue;
           
        if (frntSpace && (s[i] == '+' || s[i] == '-')) {
            positive = (s[i] == '+');
            frntSpace = false;
            continue;
        }

            
       frntSpace = false;

            
        if (isdigit(s[i])) {
            ans += s[i];
        } else {
            break;   
        }
    }

    if (ans.size() == 0) return 0;
        
    long long num = 0;
    for (char c : ans) {
        num = num * 10 + (c - '0');

            
        if (positive && num > INT_MAX) {
            return INT_MAX;  
        }
        if (!positive && -num < INT_MIN) {
            return INT_MIN;  
        }
    }

    if (!positive) num = -num;
    return (int)num;
}

int main(){
    string s = "   -042";
    cout<<myAtoi(s);
}