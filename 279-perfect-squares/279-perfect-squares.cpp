class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1);
        
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {int ans=INT_MAX;
            for(int j=1;j*j<=i;j++)
            {
                if(j*j==i)
                {ans=1;break;}
                ans=min(ans,dp[i-(j*j)]+dp[j*j]);
            }
         dp[i]=ans;
        }

        return dp[n];
    }
};