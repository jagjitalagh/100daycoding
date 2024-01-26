class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.length();
        vector<int> l(n,0),r(n,0);
        int ll=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                ll=max(ll,i);
                l[i]=ll;
            }else{
                l[i]=ll;

            }
        }
        vector<int> ans(n);
        ll=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                ll=min(ll,i);
                r[i]=ll;
            }else{
                r[i]=ll;
            }
        }

        for(int i=0;i<n;i++){
            int mini=min(l[i],r[i]);
            int maxi=max(l[i],r[i]);
            if(mini==INT_MIN){
                ans[i]=abs(maxi-i);
            }else if(maxi!=INT_MAX){
                ans[i]=min(abs(mini-i),abs(maxi-i));
            }

            if(maxi==INT_MAX){
                ans[i]=abs(mini-i);
            }else if(mini!=INT_MIN){
                ans[i]=min(abs(mini-i),abs(maxi-i));
            }
        }

        return ans;
    }
};