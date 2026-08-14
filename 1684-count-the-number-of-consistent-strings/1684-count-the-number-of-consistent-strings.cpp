class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int>freq(26,0);

        for(char ch : allowed){
            freq[ch - 'a'] = 1;
        }
        int ans = 0;

        for(string word : words){
            bool valid = true;

            for(char ch : word){
                if(freq[ch-'a'] == 0){
                    valid = false;
                    break;
                }
            }
            if(valid){
                ans++;
            }
        }
        return ans;
    }
};