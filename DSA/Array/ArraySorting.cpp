#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void sort0(vector<int>&v,int n){
    // SORTING BY tWOpASS!!
   int zero=0,one=0;

   for (int i = 0; i <n; i++)
   {
   if(v[i]==0) zero+=1;
   else one+=1;
   }
   for (int i = 0; i <n; i++)
   { if (i<zero) v[i]=0;
   else v[i]=1; 
   
   }
 } 

int main(){

vector<int>v;

v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
int n=v.size();

for(int i=0;i<n;i++)
 cout<<v[i]<<" ";

cout<<endl;
// sort (v.begin(),v.end());
// KAAM TAGDA!!

sort0(v,n);

for(int i=0;i<n;i++)
 cout<<v[i]<<" ";
cout<<endl;





}