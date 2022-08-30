class Solution {
public:
    int solve(string &a,string &b,int i,int j, vector<vector<int>>&dp){
        if(j==b.length()) return 0;
        if(i==b.length()) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(a[i]==b[j]) {
            ans=1+solve(a,b,i+1,j+1,dp);
        }
        else {
            ans=max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }
    int longestPalindromeSubseq(string s) {
        string re=s;
         vector<vector<int>>dp(s.length(),vector<int>(re.length(),-1));
        reverse(re.begin(),re.end());
            return solve(re,s,0,0,dp);
    }
};