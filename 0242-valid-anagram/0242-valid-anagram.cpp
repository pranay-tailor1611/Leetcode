class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        int freq[26] = {0};
      
        for(char ch: s){
            freq[ch - 97]++;
        }
        for(char ch: t){
            freq[ch - 97]--;
        }

        for(int i  = 0; i < 26; i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};