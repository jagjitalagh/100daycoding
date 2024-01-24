class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        for (int i = 0; i < score.size();i++) {
            score[i] = -score[i];
        }
        map<int,int> mp;
        for (int i = 0; i < score.size();i++) {
            mp[score[i]] = i;
        }
        vector <string> temp(score.size());
        int med = 1;
        for (auto i: mp) {
            if (med == 1) {
                temp[i.second] = "Gold Medal";
            }
            else if (med == 2) temp[i.second] = "Silver Medal";
            else if (med == 3) temp[i.second] = "Bronze Medal";
            else temp[i.second] = to_string(med);
            med++;

        }
        return temp;
    }
};