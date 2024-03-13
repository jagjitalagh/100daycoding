class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
         map<string,int>mp;

        if(s.size() < 10){
            return {};
        }
       vector<string>ans;
        for(int i = 0; i<s.size()-1; ++i){
            string str = s.substr(i,10);
            mp[str]++;
        }
        for(auto i : mp){
            if(i.second > 1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};