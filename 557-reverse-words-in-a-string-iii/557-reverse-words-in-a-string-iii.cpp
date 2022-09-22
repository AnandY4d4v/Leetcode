class Solution {
public:
    string reverseWords(string s) {
          int n=s.size();
        string ans;
        string temp;
        for(int i=0;i<n;i++){
            while(i<n&&s[i]==' ')i--;
            while(i<n&&s[i]!=' '){
                temp+=s[i];i++;
            }
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans+=' ';
            temp.clear();
        }
        while(ans.back()==' ')
            ans.pop_back();
        return ans;
    }
};