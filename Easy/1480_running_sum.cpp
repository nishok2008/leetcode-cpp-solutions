class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> run;
        int num;
        for(int i=0;i<nums.size();i++){
          num=accumulate(nums.begin(),nums.begin()+i+1,0);
          run.push_back(num);
        }
          return run ;
}

        
    };