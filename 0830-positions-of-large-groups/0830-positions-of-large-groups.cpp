class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> groups;
        for (int start = 0, end = 1; end < S.size(); start = end, ++end) {
            while (S[end] == S[end-1]) end += 1;
            if (end - start >= 3) groups.push_back({start, end-1});
        }
        return groups;
    }
};