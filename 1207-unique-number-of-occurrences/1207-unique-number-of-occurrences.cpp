class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
         set<int>s;
         set<int>s1;
        
        for(int i=0;i<arr.size();i++){
            s1.insert(arr[i]);
            mp[arr[i]]++;
        }
        for(auto i:mp){
            s.insert(i.second);
        }
        
        if(s.size()==s1.size()){
            return true;
        }
        return false;
    }
};