#include<bits/stdc++.h>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans;
        int i=0;
        int j=0;
        int las=-1;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else{
               if( las!=nums1[i]){   
            ans.push_back(nums1[i]);
            las=nums1[i];
            }
                i++;
                j++;
            }
        }
        return ans;
    }
};