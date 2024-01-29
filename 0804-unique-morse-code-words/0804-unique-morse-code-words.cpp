class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
   
   unordered_set<string> s;
    for(int i=0; i<words.size(); i++){
         string temp="";
         for(int j=0;j<words[i].size();j++){ //for(auto w: words){ for(auto c : w)//}
             temp+=v[words[i][j]-'a'];
         }
         s.insert(temp);
         
    }
    return s.size();
    }
};