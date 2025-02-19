#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

string s = "life is a beautiful ride";

vector<int>alpha(26,0);

for(int i=0;i<=s.length();i++){
    int Ascii = (int)s[i];
    alpha[Ascii-97]++;
}
int max = 0;
char ch;
for(int i=0;i<=26;i++){
     if (alpha[i]>max){
        max = alpha[i];
        ch=(char)(i+97);
     } 
 
}
cout<<ch<<" "<<max<<endl;
}