class Solution {
public:
    int search(vector<int>& nums, int target) {
         int pivot , start = 0 , end = nums.size()-1, mid = start + ( end - start ) / 2 ;

        while( start <= end )
        {
            if(nums[mid]==target) return mid;

            else if(nums[mid]>= nums[0]) start = mid+1;
            else {
                end = mid-1 ;
            }
            mid = start + ( end - start ) / 2 ;
        }
        pivot = end;

        if( target >= nums[0] && target <= nums[pivot] )
        {
            end = pivot;
            start = 0;
        }
        else 
        {
            start = pivot;
             end = nums.size()-1;
        }
        while( start <= end ){
            mid = start + ( end - start ) / 2 ;
            if(nums[mid] == target ) return mid;

            else if ( nums[mid] < target ) start = mid+1;
            else end = mid -1;
        }
        return -1;
    }
};