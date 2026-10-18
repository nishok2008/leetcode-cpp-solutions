class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> m;
        for(char c : magazine)
            m[c]++;
        for(char x : ransomNote)
        {
            if(m[x] == 0)
                return false;

            m[x]--;
        }

        return true;
    }
};