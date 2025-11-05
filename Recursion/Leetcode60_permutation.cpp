#include<iostream>
#include<string>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1; 
    return n*fact(n-1);
}
string generator(string s, string &ans,int n, int k,int idx){
    if(n==0 || k==0) return ans;
    if(k%fact(s.size()-1)==0){
        idx =( k/fact(s.size()-1))-1;
    }
    if(k%fact(s.size()-1)!=0){
        idx =( k/fact(s.size()-1));
    }
    ans+=s[idx];
    string z = "";
    for(int i=0;i<n;i++){
        if(i==idx){
        }
        else{
            z+=s[i];
        }
    }
    generator(z,ans,n-1,fact(s.size()-1),0);
    //cout<<z;
    return ans;

}
string getPermutation(int n, int k) {
    string s;
    for(int i=1;i<=n;i++){
        s+=to_string(i);
    }
    string ans = "";
    generator(s,ans,n,k,0);
    return ans;

}
int main(){
    int n = 4;
    int k = 12;
    cout<<getPermutation(n,k);  
}