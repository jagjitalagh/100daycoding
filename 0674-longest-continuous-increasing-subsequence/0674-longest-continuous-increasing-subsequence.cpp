class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n= nums.size();
        int start=0, end=0, ans=1;
        for (int i=1; i<n;i++){
            if (nums[i]> nums[end]){
            end=i;
            ans=max(ans, end-start+1);
            }
            else {
                start=i, end=i;
            }
        }
            return ans;
    }
};