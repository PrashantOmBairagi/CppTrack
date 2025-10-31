#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void sortColors(vector<int>& nums) {
 int low=0, mid=0,high=nums.size()-1;
  while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++, low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{ swap(nums[mid],nums[high]);
            high--;
        }
  }
};
   
int main(){

vector<int>nums;

nums.push_back(0);
nums.push_back(1);
nums.push_back(2);
nums.push_back(0);
nums.push_back(2);
nums.push_back(1);
nums.push_back(2);
nums.push_back(1);
nums.push_back(1);
nums.push_back(0);
nums.push_back(2);
nums.push_back(1);
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