class Solution {
public:
    string pushDominoes(string dms) {
        vector<bool> processed(dms.length(), false);
    queue<int> q;
    
    for (int idx = 0; idx < dms.length(); idx++) 
      if (dms[idx] != '.') q.push(idx);
    
    while (!q.empty()) {
      int currIdx = q.front(); q.pop();
      if (processed[currIdx]) continue;
      
      processed[currIdx] = true;
      int leftIdx = currIdx - 1, rightIdx = currIdx + 1;
      char curr = dms[currIdx];
      
      if (curr == 'L' && leftIdx >= 0 && !processed[leftIdx]) {
        if (dms[leftIdx] == '.') q.push(leftIdx), dms[leftIdx] = 'L';
        else if (dms[leftIdx] == 'R') dms[leftIdx] = '.';
      }
      
      else if (curr == 'R' && rightIdx <= dms.length() - 1 && !processed[rightIdx]) {
        if (dms[rightIdx] == '.') dms[rightIdx] = 'R';
        q.push(rightIdx);
      }
    }
    
    return dms;
    }
};