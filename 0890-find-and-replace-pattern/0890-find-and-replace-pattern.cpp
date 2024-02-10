class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string> ans;
        
        for(int i = 0 ; i < words.size(); i++){
            string str = words[i];

            if(str.length() != pattern.length()){
                continue;
            }

            unordered_map<char,char> m;
            bool isValid = true;

            for(int i = 0 ; i < str.length(); i++){
                if(m.find(str[i])!= m.end()){
                    if(m[str[i]] != pattern[i]){
                        isValid = false;
                        break;
                    }
                }else{
                    m[str[i]] = pattern[i];
                }
            }

            //eg str = abc ,  pattern = abb
            // here map => a->a, b->b, c->b
            // here 'b' is mapped with both b and c , so check that
            unordered_set<char> s;
            for(auto &x: m){
                s.insert(x.second);
            }

            if(s.size() != m.size()){
                isValid = false;
            }

            // if above pattern is valid
            if(isValid){
                ans.push_back(str);
            }
        }
        return ans;
    }
};