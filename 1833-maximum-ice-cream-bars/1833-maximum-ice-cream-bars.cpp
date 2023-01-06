class Solution {
public:
  int count(int index,vector<int>& costs, int coins,vector<int>&dp){
    int n=costs.size();
    if(coins<=0)
return 0;
    if(index==n-1)
    {
        if(costs[index]<=coins)return 1;
        else return 0;
    }
    if(dp[index]!=-1)return dp[index];
    int take=0,nottake=0;
    if(costs[index]<=coins){
        take=1+count(index+1,costs,coins-costs[index],dp);
    }
    nottake=0+count(index+1,costs,coins,dp); 
    return dp[index]=max(take,nottake);
}

    int maxIceCream(vector<int>& costs, int coins) {
         int n=costs.size();
        vector<int>dp(n+1,-1);
        sort(costs.begin(),costs.end());
        return count(0,costs,coins,dp);
    }
};