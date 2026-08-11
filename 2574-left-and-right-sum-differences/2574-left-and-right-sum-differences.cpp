class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftSum(n,0);
        vector<int>rightSum(n,0);
        vector<int>ans(n); 
        for(int i = 0;i<leftSum.size()-1;i++){
            leftSum[i+1] = leftSum[i] + nums[i];
        }
        for(int i = nums.size()-1; i>0; i--){
            rightSum[i-1] = rightSum[i] + nums[i];
        }

        for(int i = 0; i < ans.size();i++){
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }
        return ans;
    }
};