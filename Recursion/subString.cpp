#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subs(string ne,string original,vector<string>&ans){
    if(original == ""){ 
        ans.push_back(ne);
        return;}
    char ch=original[0];
    subs(ne,original.substr(1),ans);
    subs(ne+ch,original.substr(1),ans);
    

}
int main(){
    string s="abc";
    int n = s.size();  
    vector<string>ans;  
    subs("" , s,ans);
    for(string ele : ans){
        cout<<ele<<endl;
    }
}