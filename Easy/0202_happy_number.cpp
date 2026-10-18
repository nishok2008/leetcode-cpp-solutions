class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;
        while(n!=1)
        {int sum=0;
        if(seen.count(n))
         return false;
        seen.insert(n);
        for(int i=0;n>0;i++)
        {sum+=(n%10)*(n%10);
         n/=10;}
         n=sum;}
         return true;

          }
};