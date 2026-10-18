class Solution {
public:
    int findGCD(vector<int>& nums) {
        int low,high;
        low=*min_element(nums.begin(),nums.end());
        high=*max_element(nums.begin(),nums.end());
        return gcd(low,high);
        
    }
};