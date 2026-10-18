class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,temp;
        for(int i=0;n!=0;i++)
        {temp=n%10;
         product*=temp;
         sum+=temp;
         n/=10;
         }
         return product-sum;

        
    }
};