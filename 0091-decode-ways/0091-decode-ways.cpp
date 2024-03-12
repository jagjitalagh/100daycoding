class Solution {
public:
    int numDecodings(string s) {
       if(s[0] == '0'){
            return 0;
        }
        if(s.size() == 1){
            return 1;
        }
        vector<int> dp(s.size());
        dp[0] = 1;
        if(stoi(s.substr(0, 2)) <= 26){
            if(s[1] != '0'){
                dp[1] = 2;
            }
            else{
                dp[1] = 1;
            }
        }
        else{
            if(s[1] != '0'){
                dp[1] = 1;
            }
            else{
                return 0;
            }
        }

        for(int i = 2; i < s.size(); i++){
            if(s[i] == '0'){
                if(stoi(s.substr(i - 1, 2)) > 26 || s[i-1] == '0'){
                    return 0;
                }
                else{
                    dp[i] = dp[i-2];
                }
            }
            else{
                if(stoi(s.substr(i - 1, 2)) <= 26 && s[i-1] != '0'){
                    dp[i] = dp[i-1] + dp[i-2];
                }
                else{
                    dp[i] = dp[i-1];
                }
            }
        }
        return dp[s.size() - 1];
     
    }
};