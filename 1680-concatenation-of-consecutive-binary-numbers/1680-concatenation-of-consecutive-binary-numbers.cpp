class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=0;
        int mod = 1e9+7;
        for(int i=1;i<=n;i++)
        {
            int num = i, bits=0;
            while(num>0)
            {
                num /= 2;
                bits++;
            }
            ans <<= bits;
            ans = (ans + i) % mod;
        }
        return ans;
    }
};