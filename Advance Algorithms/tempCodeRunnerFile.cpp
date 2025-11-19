vector<int> productExceptSelf(vector<int>& nums) {
    int product=1;
    int zeroCount = 0;
    for(int ele : nums) {
        if(ele!=0){ 
            product*=ele;                
        }else zeroCount++;
    }
    for(int &ele : nums){
        if(zeroCount>1){
            ele = 0;
        }else if(zeroCount==1){
            if(ele==0) ele = product;
            else ele = 0;
        }else ele = product/ele;
    }

    return nums;    
}