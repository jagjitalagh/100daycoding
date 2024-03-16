class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, n = nums.size(), j = 0;
        while (j < n) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};