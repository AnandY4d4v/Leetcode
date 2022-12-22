class Solution {
public:
    
    int helper(vector<vector<int>> &dp,vector<int> &nums,int i,int k,int cur_or,int n){
    if(i >= n) return cur_or == k;
    if(dp[i][cur_or] != -1) return dp[i][cur_or];
    return dp[i][cur_or] = helper(dp,nums,i + 1,k,cur_or,n) + helper(dp,nums,i + 1,k,cur_or | nums[i],n);
}
    
    int countMaxOrSubsets(vector<int>& nums) {
        int k = 0, n = nums.size();
        for(auto &i : nums){
            k |= i;
        }
        vector<vector<int>> dp(n,vector<int>(k + 1,-1));
         return helper(dp,nums,0,k,0,n);
    }
};