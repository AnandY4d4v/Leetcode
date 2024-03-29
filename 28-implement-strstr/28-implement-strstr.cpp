class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(needle.length()==0)return 0;
        for(int i=0;i<n-m+1;i++){
            for(int j=0;j<m;j++){
                if(haystack[i+j]!=needle[j]) break;
                if(j==m-1) return i;
            }
        }
        return -1;
    }
};