class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2)
            return {};
        sort(changed.begin(),changed.end());
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i:changed)
        {
            mp[i]++;
        }
        for(int i=0;i<changed.size();i++)
        {
            if(mp[changed[i]]>0)
            {
                if(mp[changed[i]*2]<=0)
                return {};
                mp[changed[i]]--;
                mp[changed[i]*2]--;
                ans.push_back(changed[i]);
                    
            }
        }
        return ans;
    }
};