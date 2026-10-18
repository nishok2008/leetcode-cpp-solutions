class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        set<int> w(nums1.begin(),nums1.end());
        for(int n : nums2)
        {if(w.count(n))
         out.push_back(n);
          w.erase(n);}
          return out;
       
        
    }
};