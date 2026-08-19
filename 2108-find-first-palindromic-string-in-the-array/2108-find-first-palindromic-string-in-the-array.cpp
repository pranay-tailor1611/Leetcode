class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i = 0;i<words.size();i++){
            string neww = words[i];
            reverse(neww.begin(),neww.end());

            if(words[i] == neww){
                return words[i];
              
            }
        }
        return "";
    }
};