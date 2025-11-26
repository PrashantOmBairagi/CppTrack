#include<iostream>
#include<vector>
#include<string>
using namespace std;
// DATED: 24-11-2025 : Jabalpur : Leetcode 2483
int bestClosingTime(string customers){
    vector<int>pre(customers.size()+1);
    int hour = 0;
    for(int i=0;i<=customers.size();i++){
        pre[i]=hour;
        if(customers[i]== 'N') hour++;
    }
    hour = 0;
    // We will apply Postfix sum here.
    for(int i=customers.size();i>=0;i--){ 
        if(customers[i]== 'Y') hour++;
        pre[i] += hour;

    }
    hour = INT_MAX; int best = 0;
    for(int i=0;i<customers.size()+1;i++){
        if(pre[i]<hour){ 
            hour=pre[i];
            best=i;
        } 
    }
return best;
}
int main (){
    string s = "NNNNN";
    cout<<bestClosingTime(s);

    return 0;
}