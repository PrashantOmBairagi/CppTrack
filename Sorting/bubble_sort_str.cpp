
 #include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s = "AZYZXBDJKX";  
    int n = s.length();
    string Sigma = ""; 

    for (int i=0; i<n;i++){
    if(s[i] >= 'X'){
        Sigma += s[i];
    }
}
  cout<<Sigma<<endl;
  int k =Sigma.length();
for (int i=0; i<k;i++){
    for (int j=i+1;j<k;j++){
        if(Sigma[i] >Sigma[j]){
            swap(Sigma[i],Sigma[j]);
        }
    }
    
}
cout<<Sigma<<endl;
}