class Solution {
public:
    string toLowerCase(string s) {
       string answer;
      for(int i=0;i<s.size();i++){
        answer+=tolower(s[i]);
      }
       return answer;
    }
};