class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = -1; 
        for (int j = 0; j < n; j++) {
            if (i == -1 || nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
                if (j < n-1 && nums[j] == nums[j+1]) {
                    i++;
                    nums[i] = nums[j];
                    j++;
                }
            }
        }
        return i + 1;
    
    }
};