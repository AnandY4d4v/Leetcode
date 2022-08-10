class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp[nums.size()] ; 
        int res = 0;
        for(int  i = 0; i<nums.size(); i++)
        {
            if( nums[i] != val)
            {
                temp[res] = nums[i] ;
                res++;
            }
            
        }
        for(int i = 0 ; i<res ; i++)
        {
            nums[i] =temp[i];
        }
        return res;
    }
};