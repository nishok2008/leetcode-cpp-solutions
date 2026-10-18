class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> out;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {for(int j=0;j<nums.size();j++)
         {
          {if(nums[j]<nums[i])
           count+=1;}}
        out.push_back(count);
        count=0;}
        return out;

        }
        
};