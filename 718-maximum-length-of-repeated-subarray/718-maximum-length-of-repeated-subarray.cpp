class Solution {
public:
    int findLength(vector<int>& n, vector<int>& m) {
        vector<vector<int>> dp = vector<vector<int>>(n.size(), vector<int>(m.size(),0));
        int ans = 0;
        for (int i = 0; i < n.size(); i++)
        {
            for (int j = 0; j < m.size(); j++)
            {
                if (n[i] == m[j])
                {
                    if (i > 0 && j > 0)
                    {
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    }
                    else
                    {
                        dp[i][j] = 1;
                    }
                }
                ans = max(ans, dp[i][j]);
            }
        }
        return ans; 
    }
};