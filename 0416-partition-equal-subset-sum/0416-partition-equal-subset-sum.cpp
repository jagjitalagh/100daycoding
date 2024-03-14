class Solution {
public:
    bool canPartition(vector<int>& nums) {
       int sum = 0;
        for (int num : nums) {
            sum += num;
        }

        // If the sum is odd, it can't be partitioned into equal sum subsets
        if (sum % 2 != 0) {
            return false;
        }

        sum /= 2;
        int n = nums.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

        // Base case: if sum is 0, it can always be achieved by taking no elements
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = true;
        }

        // Fill the dp table
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= sum; ++j) {
                dp[i][j] = dp[i - 1][j];
                if (j >= nums[i - 1]) {
                    dp[i][j] = dp[i][j] || dp[i - 1][j - nums[i - 1]];
                }
            }
        }

        return dp[n][sum]; 
    }
};