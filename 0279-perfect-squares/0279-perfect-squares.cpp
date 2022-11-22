class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n<=0) return 0;
        if(n==1) return n;
        if(dp[n]!=-1) return dp[n];
        int ans=INT_MAX-10;
        for(int i=1;i*i<=n;i++)
        {
            if(i*i==n) return n/(i*i);
            ans=min(ans,1+solve(n-(i*i),dp));    
        }
          return dp[n]=ans;    
    }
    int numSquares(int n) {
         vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};