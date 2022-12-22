class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int k = 0, n = nums.size();
        for(int i : nums){
            k |= i;
        }
        vector<vector<int>> dp(n,vector<int> (k + 1,0));
        for(int i = 0; i<=k; i++){
            if((nums[n-1] | i) == k) dp[n-1][i] = 1;
            if(i == k) dp[n-1][i]++;
        }
        
        
        for(int i = n - 2; i>=0; i--){
            for(int j = 0; j<=k; j++){
                dp[i][j] = dp[i + 1][j];
                if((j | nums[i]) <= k) dp[i][j] += dp[i + 1][j | nums[i]];
            }
        }
        return dp[0][0];
    
    }
};