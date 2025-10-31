#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    a.push_back(6);
    a.push_back(9);
    a.push_back(3); 
    a.push_back(0);
    a.push_back(7);
    display(a);
    int i=0,j=a.size()-1;
    while(i<j){
        int temp;
        temp= a[i];
        a[i]= a[j];
        a[j]= temp;
        i++; j--;
    }
    display(a);
}