class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int count = 0, prev = 0, curr = 1, n = points.size(), m;
        while (prev < n){
            m = points[prev][1];
            while (curr < n && points[curr][0] <= points[prev][1] && m >= points[curr][0]){
                m = min(m, points[curr][1]);
                curr++;
            }
            prev = curr;
            count++;
        }
        return count;
    }
};