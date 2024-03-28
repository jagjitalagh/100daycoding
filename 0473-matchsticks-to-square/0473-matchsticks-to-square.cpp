class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int sum = 0;
        for (auto &n : matchsticks) {
            sum += n;
        }
        if (sum % 4 != 0) return false;
        int length = sum / 4;
        for (auto &n : matchsticks) {
            if (n > length) return false;
        }
        std::sort(matchsticks.begin(), matchsticks.end());
        std::reverse(matchsticks.begin(), matchsticks.end());

        std::set<std::vector<int>> visited;

        // edge1, edge2, edge3, edg4, idx of matchstick
        std::vector<std::vector<int>> stack = {{0, 0, 0, 0, 0}};
        while (stack.size() > 0) {
            auto state = stack.back();
            stack.pop_back();
            if (state[0] == length && state[1] == length &&
                state[2] == length && state[3] == length &&
                state[4] == matchsticks.size()) return true;

            for (int i = 0; i < 4; i++) {
                if (state[i] + matchsticks[state[4]] <= length &&
                    state[4] < matchsticks.size()) {
                    auto tmp = state;
                    tmp[i] += matchsticks[state[4]];
                    tmp[4]++;
                    std::vector<int> visit = {tmp[0], tmp[1], tmp[2], tmp[3]};
                    std::sort(visit.begin(), visit.end());
                    if (visited.find(visit) == visited.end()) {
                        stack.push_back(tmp);
                        visited.insert(visit);
                    }
                }
            }
        }
        return false;
    }
};