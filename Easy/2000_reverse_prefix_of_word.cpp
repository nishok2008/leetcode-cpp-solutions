class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        int index=word.find(ch);
        for(int i=index;i>=0;i--)
        ans.push_back(word[i]);
        for(int i=index+1;i<word.size();i++)
        ans.push_back(word[i]);
        return ans;
    }
};