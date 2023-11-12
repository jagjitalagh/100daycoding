class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.rbegin() , nums.rend());
        int n=nums.size();
        int count=0;
        for(int i=0 ; i<n ; i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
               int a=nums[i];
                int b=nums[j];
                int c=nums[k];
                if(b+c>a){
                  count+=k-j;
                   j++;
                }
                else{
                    k--;
                }
            }
        }
        return count;
    }
};