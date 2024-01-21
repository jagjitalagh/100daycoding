class Solution {
public:
    vector<string> letterCombinations(string digits) {
          string numPad[10] = { "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"};

        if(digits.empty()) return {};

        vector<string>ans;
        ans.push_back("");

        for(int i=0 ; i<digits.size() ; i++){
            vector<string>temp;
            string check = numPad[digits[i]- '0'];

            for(int j=0 ; j<check.size() ; j++){
                for(int k=0 ; k<ans.size() ; k++){
                    temp.push_back(ans[k] + check[j]);
                }
            }

            ans = temp;
        }

        return ans;
    }
};