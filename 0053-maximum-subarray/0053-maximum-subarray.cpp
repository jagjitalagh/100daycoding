class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxiSum = INT_MIN;
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            
            if (currentSum > maxiSum) {
                maxiSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxiSum;
    }
};