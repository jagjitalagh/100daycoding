class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> points;

    for (const auto& car : nums) {
        for (int i = car[0]; i <= car[1]; i++) {
            points.insert(i);
        }
    }

    return points.size();

    }
};