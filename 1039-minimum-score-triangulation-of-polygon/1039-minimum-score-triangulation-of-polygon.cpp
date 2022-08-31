class Solution {
public:
    int solve(int i, int j,vector<int>&v,vector<vector<int>>&dp){
        if(i+1==j) return 0;
        int ans=INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i+1;k<j;k++){
            ans = min ( ans,v[i]*v[j]*v[k] + solve(i,k,v,dp) + solve(k,j,v,dp));
        }
        return dp[i][j]=ans;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       return solve(0,values.size()-1,values,dp);
    }
};