class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        unordered_set<string> hs;
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                int p1 = j + 1, p2 = nums.size() - 1;
                while (p1 < p2) {
                    long long int sum = static_cast<long long int>(nums[i]) + nums[j] + nums[p1] + nums[p2];
                    if (sum < target) {
                        ++p1;
                    } else if (sum > target) {
                        --p2;
                    } else {
                        string temp = to_string(nums[i]) + ',' + to_string(nums[j]) +
                                      ',' + to_string(nums[p1]) + ',' + to_string(nums[p2]);

                        if (hs.find(temp) == hs.end()) {
                            ans.push_back({nums[i], nums[j], nums[p1], nums[p2]});
                            hs.insert(temp);
                        }

                        ++p1;
                        --p2;
                    }
                }
            }
        }

        return ans;
    }
};