class Solution {
public:
     int dp[5005][1005][2];
    int recursion(vector<int> &prices, int i, int bought, bool cooldown){
        if(i>=prices.size()) return 0;
        
        if(dp[i][bought][cooldown] != -1) return dp[i][bought][cooldown];

        if(bought == 1001){
            // Nothing has been bought right now
            
            if(cooldown){
               // If cooldown period we cannot buy     
               // But send the cooldown as false 
               return dp[i][bought][cooldown] = recursion(prices, i + 1, 1001, false);
            }
            else{
                // Either buy or do not buy
                return dp[i][bought][cooldown] = max(recursion(prices, i + 1, prices[i], false), recursion(prices, i + 1, 1001, false));
            }
        }
        else{
            // Something has been bought already

            // Either sell or not sell
            // send the cooldown as true while selling

            return dp[i][bought][cooldown] = max(prices[i] - bought + recursion(prices, i + 1, 1001, true), recursion(prices, i + 1, bought, false));
        }
    }
    int maxProfit(vector<int>& prices) {
        memset(dp, -1, sizeof(dp));
        return recursion(prices, 0, 1001, false);
    }
};