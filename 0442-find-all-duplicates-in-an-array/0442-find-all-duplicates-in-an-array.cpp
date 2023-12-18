class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       sort(nums.begin() , nums.end());
        set<int>st;
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; i++){
            if(st.count(nums[i])){
                ans.push_back(nums[i]);
            }
            else{
                st.insert(nums[i]);
            }
        }
        return ans;
    }
};