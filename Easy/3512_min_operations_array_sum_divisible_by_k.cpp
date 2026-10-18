class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0,i=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%k==0){
            return 0;
        }
        else{
            while(sum%k!=0){
                 nums[i]=nums[i]-1;
                 sum=accumulate(nums.begin(),nums.end(),0);
                 count++;
              


            }
            return count;
           
        }
        
        
        
    }
};