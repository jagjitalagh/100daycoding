class Solution {
public:
    int countKeyChanges(string str) {
        string s;
        for (char c : str) {
            s += tolower(c);
        }
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
            count ++;
        }   
    }
    return count;
    }
};