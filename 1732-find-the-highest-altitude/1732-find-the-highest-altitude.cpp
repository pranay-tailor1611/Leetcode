class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>ans(n+1);
        int maxi = 0;
        int maxii;
        ans[0] = 0;
        for(int i = 0;i<gain.size();i++){
            ans[i+1] = ans[i] + gain[i];
        }
        maxii = *max_element(ans.begin(),ans.end());
        return max(maxi,maxii);
    }
};