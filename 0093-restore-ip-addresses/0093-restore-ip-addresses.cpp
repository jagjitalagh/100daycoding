class Solution {
public:
    vector<string>res; 
    void createIp(string s, int idx, string temp, int count){
        if (idx > s.size() || count > 4)
            return ;

        if (count == 4){
            if (temp.size() == s.size()+4){
                temp.pop_back(); 
                res.push_back(temp); 
            }
            else
                return ; 
        }  


        if (idx >= s.size())    
            return;
        
        for(int i = 1; i <=  3; i++){
            string ss = s.substr(idx, i); 
            int num = stoi(ss); 
            // 021
            if (ss == "0")
                createIp(s, idx + i , temp + ss+ ".", count+1); 
            if (num <=  255  && ss[0] != '0')
                createIp(s, idx + i , temp + ss+ ".", count+1); 
        }
    }
    vector<string> restoreIpAddresses(string s) {
        createIp(s, 0, "", 0); 
        return res;
    }
};