class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,even=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                count=count+1;
            }
          
            if(count%2==0){
                even=even+1;
            }
            count=0;
        }
        return even;

        
        
    }
};