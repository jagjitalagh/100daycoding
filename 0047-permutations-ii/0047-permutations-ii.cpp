class Solution {
public:
    void myfunc(vector<int>& nums, vector<vector<int>> &ans, vector<int>& temp, unordered_map<int,int>& freq){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(auto i:freq){
            if(i.second>0){
                temp.push_back(i.first);
                freq[i.first]--;
                myfunc(nums,ans,temp,freq);
                temp.pop_back();
                freq[i.first]++;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        myfunc(nums,ans,temp,freq);
        return ans;
    }
};