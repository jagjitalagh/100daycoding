class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
          int n = words.size();
        vector<int> ans;
        int i = 0;
        while(i < n){
            string temp = words[i];
            int len = temp.length();
            for(int j=0; j<len; j++){
                if(temp[j] == x){
                    ans.push_back(i);
                    break;
                }
            }
            i++;
        }

        return ans;
    }
};