class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;
        int min_num = INT_MAX;
        int max_num = INT_MIN;
        for (const auto & num : nums)
        {
            min_num = std::min(min_num, num);
            max_num = std::max(max_num, num);
        }
        std::sort(nums.begin(), nums.end());
        int median;
        if (nums.size() % 2)
            median = nums[nums.size() / 2];
        else
            median = (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2;
        int result = 0;
        for (const auto & num : nums)
        {
            result += std::abs(num - median);
        }
        return result;
    }
};