class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
          int n = matches.size();
        vector<vector<int>> ans(2);
        set<int> nm;
        map<int, int> nlm;
        
        for(auto &i : matches)
            nm.insert(i[0]), nm.insert(i[1]), nlm[i[1]]++;
        
        for(auto &i : nm)
        {
            if(nlm.find(i) == nlm.end())
                ans[0].push_back(i);
            else if(nlm[i] == 1)
                ans[1].push_back(i);
        }
            
        return ans;
    }
};