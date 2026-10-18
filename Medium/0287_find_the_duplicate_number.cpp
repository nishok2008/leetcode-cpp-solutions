class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x : nums)
        m[x]++;
        for(auto p:m)
        {if(p.second>1)
         return p.first;}
         return 0;
    }
};