#include<iostream>
#include<string>
#include <cctype>
using namespace std;
// bool helper(string str,int i,int j){
//         if(i>j) return true;
//         if(str[i]!=str[j]) return false;
//         else return helper(str,i+1,j-1);
//     }
//     bool isPalindrome(string s) {
//         string str = "";
//         int n = s.length();
//         int j = 0;
//         cout<<n<<endl;
//         while(j<n){
//             if(isalnum(s[j])){
//                 str+=tolower(s[j]);
//             }
//             j++;
//         }
//         int y = str.length()-1;
//         if(str=="") return true;
//         else return helper(str,0,y);
//     }
bool isPalindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        while(i<j && !isalnum(s[i])){
            i++;
        }
        while(i<j && !isalnum(s[j])){
            j--;
        }
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){

    string s ="A man, a plan, a canal:panama";
    cout<<(isPalindrome(s)? "True" : "False");

}
    
