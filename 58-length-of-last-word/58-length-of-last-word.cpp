class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        int wl=0;
        int l=0;
        while(i<s.length()){
            wl++;
            if(s[i]==' ') {
               
                wl=0;
            }
             if(wl!=0) l=wl;
            i++;
        }
     if(wl==0) return l;
        return wl;
    }
};