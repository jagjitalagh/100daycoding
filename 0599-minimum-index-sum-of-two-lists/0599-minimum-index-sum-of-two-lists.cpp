class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ag;
        unordered_map<string,int> mp;
        for(int i=0;i<list1.size();i++){
            mp[list1[i]]=i;
        }
        int mini=INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(mp.find(list2[i])!=mp.end()){
                int currindex=i+mp[list2[i]];
                if(currindex<mini){
                    ag.clear();
                    mini=currindex;
                    ag.push_back(list2[i]);
                }
                else if(currindex==mini) ag.push_back(list2[i]);
            }
        }
        return ag;
    }
};