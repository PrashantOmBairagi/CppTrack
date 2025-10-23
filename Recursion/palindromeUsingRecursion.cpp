#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string &str,int i,int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else return isPalindrome(str,i+1,j-1);
}
int main(){

    string str ="";
    int i = 0;
    int j = str.size()-1;

    // while(i<j){
    //     if(str[i]!=str[j]){
    //         cout<<"False";
    //         return 0;}
    //     i++;
    //     j--;
    // }
    
    cout<<isPalindrome(str,i,j);
}