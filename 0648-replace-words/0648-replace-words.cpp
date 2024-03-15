class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
         vector<string> partition;
        string str = "";
        for(int i = 0; i < sentence.length(); i++){
            if(sentence[i] == ' ') {
                if(str.length() != 0){
                    partition.push_back(str);
                    str = "";
                }
            }
            else{
                str += sentence[i];
            }
        }  
        if(str.length() != 0)  partition.push_back(str);
        

        for(auto x : dictionary){
            for(int i = 0; i < partition.size(); i++){
                
                if(partition[i].substr(0,x.length()) == x) partition[i] = x; 
            }
        }
        string s = "";
        for(int i = 0; i < partition.size()-1; i++)  s += partition[i] + " ";
        return s+=partition[partition.size()-1];
    }
};