class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
         vector<size_t> row_pos;
        vector<vector<int>> answer { matrix };

        for(size_t col = 0; col < answer.front().size(); ++col) {
            int value = 0;
            for(size_t row = 0; row < answer.size(); ++row) {
                int curr = answer[row][col];
                if(curr < 0) row_pos.push_back(row);
                else value = max(value, curr);
            }

            for(auto row : row_pos)
                answer[row][col] = value;
            
            row_pos.clear();
        }

        return answer;
    }
};