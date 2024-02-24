class Solution {
public:
    int firstUniqChar(string s) {
        int ans[256] = {0};

       for(int i=0;s[i]!='\0';++i){
           ans[s[i]]++;
       }
        for(int i=0;s[i]!='\0';++i){
            if(ans[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};