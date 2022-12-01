class Solution {
public:
int count(string s1){
    int c=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='a' || s1[i]=='e'|| s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U'){
            c++;
        } 
    }
    return c;
}
    bool halvesAreAlike(string s) {
        int n=s.length();
        n=n/2;
        string s1="";
        for(int i=0;i<n;i++){
           
            s1.push_back(s[i]);
        }
        string s2="";
        for(int i=n;i<s.length();i++){
            s2.push_back(s[i]);
        }
        if(count(s1)==count(s2)) return true;
        return false;
    }
};