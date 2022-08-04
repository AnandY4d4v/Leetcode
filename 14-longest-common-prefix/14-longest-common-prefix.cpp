class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        
        for (int i = 0; i < strs[0].size(); i++) {
            char temp = strs[0][i];
            int flag = 0;
            for(int j = 0; j < strs.size(); j++) {
                if(temp != strs[j][i]) {
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 1)
                break;
            
            if(flag == 0) 
                ans.push_back(temp);
        }
        
        return ans;
    }
};