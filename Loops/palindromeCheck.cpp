#include<iostream>
using namespace std;
int main(){
    int x = -12321;
    if(x<0){
        cout<<"NOT a Palindrome."<<endl;
        return 0;
        x*=-1;
    }
    string str = to_string(x);
    
    for(int i=0;i<str.length()/2;i++){
        
        if(str[i]!=str[str.length()-i-1]) {
            cout<<"NOT Palindrome :"<<endl;
            return 0;
        }
    }
    cout<<"It is a Palindrome."<<endl;
    return 0;
}