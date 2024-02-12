class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<vector<int>::iterator,vector<int>::iterator> p =
        equal_range(nums.begin(), nums.end(), target);
        
    if(p.first == p.second) return {-1, -1};
    return {(int)(++(p.first) - nums.begin()) - 1, (int)(p.second - nums.begin()) - 1};
    
    }
};