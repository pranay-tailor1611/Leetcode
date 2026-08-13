class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for(int i = 0; i<nums.size();i++){
            elementSum += nums[i];
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i] < 10){
                digitSum += nums[i];
                continue;
            }
            else if(nums[i] >=10){
                while(nums[i] != 0){
                int rem = nums[i] % 10;
                digitSum += rem;
                nums[i] /= 10;
                }
            }
        }
        return abs(elementSum - digitSum);
    }
};