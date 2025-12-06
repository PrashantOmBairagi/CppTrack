#include<iostream>
#include<string>
using namespace std;
// DATED: 04-12-2025 : Jabalpur Leetcode168 EASY
// Very easy question and easy to implement. Just vice-versa of Leetcode171
string convertToTitle(int columnNumber) {
    string ans = "";
    while(columnNumber>0){
        columnNumber--;
        char ch = (columnNumber%26) + 'A';
        ans+=ch;
        columnNumber/=26;
    }
    return ans;    
}
int main(){
    int n = 701;
    cout<<convertToTitle(n);
}