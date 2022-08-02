class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>v;
        if(x<0)return false;
        while(x>0){
            v.push_back(x%10);
            x=x/10;
        }
         int n=v.size();
         int flag = 0;
        for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (v[i] != v[n - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
      return false;
    else
     return true;
    }
};