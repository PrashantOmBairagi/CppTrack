#include<iostream>
#include<vector>
#include<string>
using namespace std;
// DATED: 15-11-2025 : Jabalpur
// Solved LEETCODE242 it was to find if two strings are anagram or not. which i solved by taking extra vector. but it could have been solved by not taking a vector and do sort and match but will do that next time and this is the fastest method to solve that question.

bool isAnagram(string s, string t) {
    if(s.size()<t.size() || t.size()<s.size()) return false;
    int n = s.size();
    vector<int>check(26,0);
    for(int ele : s){
        check[int(ele-97)]++;
    }
    for(int ele : t){
        check[int(ele-97)]--;
    }
    for(int ele : check){
        if(ele<0) return false;
    }
    return true;
}
int main(){
    string s = "rat";
    string t = "tar";
    cout<< (isAnagram(s,t)? "Yes! its an Anagram" : "Not an Anagram");
    cout<<endl;
}