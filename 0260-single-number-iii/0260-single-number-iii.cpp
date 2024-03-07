class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int> ans;

        for(auto &num : nums){
            mp[num]++;
        }

        for(auto &a : mp){
            if(a.second == 1){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};