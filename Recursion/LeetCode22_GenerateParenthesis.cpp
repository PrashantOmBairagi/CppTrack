#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string>generate(string s,int open,int close, int n, vector<string>&ans){
    if(open==n && close==n){
        ans.push_back(s);
        return ans;
    }
    
    if(open <=n)generate(s+'(',open +1,close,n,ans);
    if(open>close && close<=n)generate(s+')',open ,close+1,n,ans);
    
    return ans;
}
int main(){
    int n = 4;
    vector<string>ans;
    for(string ele : generate("",0,0,n,ans)){
        cout<<ele<<endl;
    }
}