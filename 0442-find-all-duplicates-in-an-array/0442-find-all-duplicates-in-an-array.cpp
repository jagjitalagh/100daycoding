class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> ans;
        set<int> s;
        for(int i=0 ; i<nums.size() ; i++){
            if(s.count(nums[i])){
                //if the element is present
                ans.push_back(nums[i]);
            }
            else{
                // if the element is not present
                s.insert(nums[i]);
            }
        }
        return ans;
    }
};