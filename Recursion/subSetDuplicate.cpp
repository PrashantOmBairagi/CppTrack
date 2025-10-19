#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subs(string ne,string original,vector<string>&ans,bool flag){
    if(original == ""){ 
        ans.push_back(ne);
        return;}
    char ch=original[0];
    if(original.size()==1){
        if(flag==true)subs(ne+ch,original.substr(1),ans,true);
        subs(ne,original.substr(1),ans,true);
        return;
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true)subs(ne+ch,original.substr(1),ans,true);
        subs(ne,original.substr(1),ans,false);
    }
    else{
        if(flag==true)subs(ne+ch,original.substr(1),ans,true);
        subs(ne,original.substr(1),ans,true);
    }

} 
int main(){
    string s="aac";
    int n = s.size();  
    vector<string>ans;  
    subs("" , s,ans,true);
    for(string ele : ans){
        cout<<ele<<endl;
    }
}