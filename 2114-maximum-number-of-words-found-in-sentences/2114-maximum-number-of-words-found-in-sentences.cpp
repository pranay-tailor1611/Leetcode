class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i = 0;i < sentences.size();i++){
            int count = 0;
            stringstream ss(sentences[i]);
            string word;
           while(ss >> word){
            count++;
           }
           ans = max(ans,count);
        }
        return ans;
    }
};