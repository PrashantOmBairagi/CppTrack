#include<iostream>
#include<vector>
#include<string>
using namespace std;
string helper(vector<string>&strs,string s){
    int SmallestStr=strs[0].size();
    for(int l=1;l<strs.size()-1;l++){
        if(SmallestStr>strs[l].length()){
            SmallestStr=strs[l].length();
        }
    }
    for (int i = 0; i < SmallestStr; i++) {
        char currentChar = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
            if (strs[j][i] != currentChar) {
                return s;
            }
        }
        s.push_back(currentChar);
    }
    return s;
}
int main(){
    vector<string> strs = {"flower","flow","flight"};
   //cout<<strs[0][0];
  cout<<helper(strs,"");
}