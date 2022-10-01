class Solution {
public:
 bool isValid(char a, char b = '-'){
        int n = a-'0';
        if(b == '-')return (n!=0);
        n = (b-'0')*10 + n;
        return (n>=10 && n<27);
    }
    int numDecodings(string s) {
        int n = s.length();
        int p2 = 0, p1 = 1, cur = 0;
        for(int i=0;i<n;i++){
            cur = 0;
            if(isValid(s[i]))cur += p1;
            if(i>0 && isValid(s[i], s[i-1]))cur+=p2;
            p2 = p1;
            p1 = cur;
        }
        return (p1==-1?0:p1);
    }
};