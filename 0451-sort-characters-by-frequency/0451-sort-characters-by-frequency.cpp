class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, int>> count(256);
        for(int i=0; i<256; i++) count[i].first = i;
        for(auto &c: s) count[c].second++;
        sort(count.begin(), count.end(), [](pair<int,int> &a, pair<int, int> &b){
            return a.second > b.second;
        });
        int idx = 0;
        for(int i=0; i<256; i++) {
            for(int j=0; j<count[i].second; j++) {
                s[idx++] = char(count[i].first);
            }
        }
        return s;
    }
};