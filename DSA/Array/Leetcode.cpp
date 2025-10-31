#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void sortColors(vector<int>& nums) {
    // SORTING BY tWOpASS!!
   int zero=0,one=0,two=0;
  int n = nums.size();
   for (int i = 0; i <n; i++)
   {
   if(nums[i]==0) zero+=1;
   if(nums[i]==1) one+=1;
   if(nums[i]==2) two+=1;
   }
 for (int i = 0; i < nums.size(); i++) {
        if (zero > 0) {
            nums[i] = 0;
            zero--;
        } else if (one > 0) {
            nums[i] = 1;
            one--;
        } else {
            nums[i] = 2;
           two--;
    }}}

int main(){

vector<int>nums;

nums.push_back(0);
nums.push_back(1);
nums.push_back(2);
nums.push_back(0);
nums.push_back(2);
nums.push_back(1);

int n=nums.size();

for(int i=0;i<n;i++)
 cout<<nums[i]<<" ";

cout<<endl;
// sort (v.begin(),v.end());
// KAAM TAGDA!!

sortColors(nums);

for(int i=0;i<n;i++)
 cout<<nums[i]<<" ";
cout<<endl;





}