#include<iostream>
using namespace std;
#include<string>
#include <vector>
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){    
    string s="aabbcc";
    int unique=-1;
    int n = s.length();
    vector<int>arr(26,0);

        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }    
        
        for(int i=0;i<n;i++){
            if(arr[s[i]-'a']==1){
                unique=i;
                break;
            }
        }  

    cout<<unique;
}
