class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>ans;
        for(int row = 0; row < accounts.size();row++){
            int sum = 0;
            for(int col = 0;col < accounts[0].size();col++){
                sum += accounts[row][col];
            }
            ans.push_back(sum);
        }
        int max = *max_element(ans.begin(),ans.end());
        return max;
    }
};