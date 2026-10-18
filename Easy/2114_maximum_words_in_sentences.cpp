class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0,wordc=0;
        vector<int> words;
        for(int i=0;i<sentences.size();i++)
        {for(int j=0;j<sentences[i].size();j++)
         {if(sentences[i][j]==' ')
          count+=1;}
          wordc=count+1;
          words.push_back(wordc);
          count=0;
          wordc=0;}
          int max=*max_element(words.begin(),words.end());
          return max;
        
    }
};