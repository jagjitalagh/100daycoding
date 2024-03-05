class Solution {
public:
    bool find_ans(int i,int j,int n,int m,vector<vector<char>>&arr,string &s,int idx){
    if(idx>=s.size()){
        return true;
    }
    if( i<0 || j<0 || i>=n || j>=m || arr[i][j]=='!'||arr[i][j] != s[idx] )return false;

    char c = arr[i][j];
    arr[i][j]='!';
    bool t = find_ans(i-1,j,n,m,arr,s,idx+1);
    bool b = find_ans(i+1,j,n,m,arr,s,idx+1);
    bool l = find_ans(i,j-1,n,m,arr,s,idx+1);
    bool r = find_ans(i,j+1,n,m,arr,s,idx+1);
    arr[i][j]=c;
    return t||r||b||l;
     
}
    bool exist(vector<vector<char>>& arr, string s) {
        int n = arr.size();
    int m = arr[0].size();
 if (s.empty()) {
        return true;
    }
    for(int i = 0;i<n;i++){
        for(int j= 0;j<m;j++){
            if(arr[i][j]==s[0]){
                if(find_ans(i,j,n,m,arr,s,0))return true;\
            }
        }
    }
    return false;
    }
};