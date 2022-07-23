class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>result;
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        while(i<n && j<m){
            if(nums1[i]>nums2[j])
            {
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
           else 
            {
               if(nums2[j]==nums1[i])
                 result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return result;
    }
    
};