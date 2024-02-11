class Solution {
public:
    bool isPathCrossing(string path) {
       unordered_map<char,pair<int,int>> mp;
        mp['N']={0,1};
        mp['S']={0,-1};
        mp['E']={1,0};
        mp['W']={-1,0};
        
        map<pair<int,int>,int> mpp;
        int xx=0,yy=0;
        mpp[{0,0}]++;
        for(auto ch:path){
            xx+=mp[ch].first,yy+=mp[ch].second;
            if(mpp.find({xx,yy})!=mpp.end()){
                return true;
            }
            mpp[{xx,yy}]++;
        }

        return false; 
    }
};