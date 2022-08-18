class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int n=arr.size();
         vector<int> v;
        
        for(auto it:m)
        {
            v.push_back(it.second);
        }
            sort(v.rbegin(),v.rend());
        int ans = 0;
        int sum = 0;
        for(int i=0;i<v.size();i++)
        {
            sum += v[i];
            ans++;
            if(sum >= n/2)
                break;
        }
        return ans;
    }
};