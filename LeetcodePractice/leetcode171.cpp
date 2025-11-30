#include<iostream>
#include<string>
#include<cmath>
using namespace std;
// DATED: 28-11-2025 : Jabalpur : Leetcode 171 EASY
// Today i solved leetcode 171 which was an easy question cause i have Microcontrollers exam tomorrow. I used bruteforce first and then optimised the solution. There is different method as weel.
int titleToNumber(string columnTitle) {

    int n = columnTitle.size();
    int op = 0;

    for(int i=0;i<n;i++){
        op += (int(columnTitle[i])-64)*  pow(26,n-i-1);    
    }

    return op;
}

int main(){
    string s = "AAA";
    cout<<titleToNumber(s);
}