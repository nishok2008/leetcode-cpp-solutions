class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        for(int i;n>0;i++)
        {int r=n%2;
         if(r==1)
         count+=1;
         n=n/2;}
         return count;
        
    }
};