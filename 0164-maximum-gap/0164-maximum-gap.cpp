class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int len = nums.size();
        if(len < 2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxDiff=nums[1]-nums[0];
        for(int i = 1 ; i< len-1;i++){
            maxDiff = max(maxDiff,(nums[i+1] - nums[i]));
        }
        return maxDiff;
    }
};