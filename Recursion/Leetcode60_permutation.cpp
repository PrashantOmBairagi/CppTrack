#include<iostream>
#include<string>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1; 
    return n*fact(n-1);
}
string generator(string s, string &ans,int n, int k){
    if(n==0) return ans;
    int idx = 0;
    if(k%fact(s.size()-1)==0){
        idx =( k/fact(n-1))-1;
    }
    if(k%fact(s.size()-1)!=0){
        idx =( k/fact(n-1));
    }
    ans+=s[idx];
    s.erase(s.begin()+idx);
    generator(s,ans,n-1,k-idx*fact(n-1));
    return ans;

}
string getPermutation(int n, int k) {
    string s;
    for(int i=1;i<=n;i++){
        s+=to_string(i);
    }
    string ans = "";
    generator(s,ans,n,k);
    return ans;

}
int main(){
    int n = 3;
    int k = 3;
    cout<<getPermutation(n,k);  
}