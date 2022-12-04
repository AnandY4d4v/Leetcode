class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
         int n = nums.size();
        vector<long long> prefix(n, 0);
        prefix[0] = nums[0];
        for(int i = 1; i < n; ++i){
            prefix[i] = prefix[i-1]+nums[i];
        }
        long long res = INT_MAX;
        int ans;
        for(int i = 0; i < nums.size()-1; ++i){
            long long left = prefix[i]/(i+1);
            long long right = (prefix[n-1]-prefix[i])/(n-i-1);
            if(res > abs(left-right)){
                res = abs(left-right);
                ans = i;
            }
        }
        if(prefix[n-1]/n < res) ans = n-1;
        return ans;
    }
};