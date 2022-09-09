class Solution {
public:
       static bool comp(vector<int>&p1 ,vector<int>&p2){
        if(p1[0]==p2[0]){
            return p1[1]<p2[1];//defenses in incresing order
        }
        return p1[0]>p2[0];//attacks in descending order
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
         int ans=0,n=p.size();
        sort(p.begin(),p.end(),comp);//sorting using comparator
        int y=p[0][1];

        for(int i=0;i<n;i++){
            if(y>p[i][1]){
                ans++;
            }
            else{
                y=p[i][1];
            }
        }
        return ans;
    }
};