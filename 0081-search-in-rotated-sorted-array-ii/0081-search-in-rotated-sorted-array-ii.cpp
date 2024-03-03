class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = end + (start - end) / 2;

            if(nums[mid] == target){
                return true;
            }



            if(nums[mid] == nums[start] && nums[mid]==nums[end]){
                start = start + 1;
                end = end - 1;
                continue;
            }
            else if(nums[mid] >= nums[start]){

                if(target >= nums[start] && target < nums[mid]){
                    end = mid - 1;
                }
                else{
                    start = mid +1;
                }

            }
            else{
                if(target <= nums[end] && target > nums[mid]){
                    start = mid + 1;
                }
                else{
                    end = mid  - 1;
                }
            }
        }

        return false;
    }
};