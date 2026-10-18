class Solution {
public:
    string truncateSentence(string s, int k) {
        int words=0;
        string output="";
        for(int i=0;i<s.size();i++)
        {if(s[i]==' ')
         words++;
         if(words==k)
         break;
         output+=s[i];}
        return output;
    }
};