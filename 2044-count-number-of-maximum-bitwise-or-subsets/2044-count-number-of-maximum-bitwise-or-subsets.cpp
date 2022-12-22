class Solution {
public:
    
    int helper(int k,int n,vector<int> &nums,int i,int cur_or){
    if(i >= n) return cur_or == k;
    return helper(k,n,nums,i + 1,cur_or) + helper(k,n,nums,i + 1,cur_or | nums[i]);
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        int k = 0, n = nums.size();
        for(auto &i : nums){
            k |= i;
        }
        return helper(k,n,nums,0,0);
    }
};