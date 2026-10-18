class Solution {
public:
    int countDigits(int num) {
        int digit, temp=num,count=0;
        while(temp>0){
             digit=temp%10;
        if(num%digit==0){
            count++;
        }
        temp=temp/10;}
        return count;

        
    }
};