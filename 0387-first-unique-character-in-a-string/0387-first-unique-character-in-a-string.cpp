class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
    int index = 0;
    for(auto c : s) {
        if(mp[c] == 1) {
            return index;
    }
    index++;
}
        return -1;
    }
};