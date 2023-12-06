class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int mindiff=1e9; 
        int csum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){ 
            int start=i+1;
            int end=n-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                int diff=abs(sum-target);
                if(diff<mindiff){ 
                    mindiff=diff;
                    csum=sum;
                }
                if(sum==target){
                    csum=sum;
                    goto label;
                }
                else if(sum<target){
                    start++; 
                }
                else{
                    end--; 
                }
            }    
        }
        label:
        return csum;
    }
};