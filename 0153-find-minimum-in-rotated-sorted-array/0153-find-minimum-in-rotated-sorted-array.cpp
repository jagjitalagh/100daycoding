class Solution {
public:
    int findMin(vector<int>& nums) {
       int n = nums.size();
        int low = 0, high =n-1 , mid, ans= INT_MAX;
        while(low<=high){
            mid = low+(high-low)/2;
            if(mid != n-1 && nums[mid]>nums[mid+1])
            return nums[mid+1];
            else if(nums[mid]>=nums[low] && nums[mid]>nums[high])
                low=mid+1;
            else{
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans; 
    }
};