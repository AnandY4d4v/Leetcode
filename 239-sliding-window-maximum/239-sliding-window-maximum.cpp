class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>&arr, int k) {
        int n=arr.size();
     deque<int> q;
        vector<int>ans;
        for(int i=0;i< k ;i++){
            while(!q.empty() && arr[q.back()]<=arr[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(arr[q.front()]);
        for(int i=k ; i<n;i++){
            if(!q.empty() && i-q.front()>=k)
            q.pop_front();
            while(!q.empty() && arr[q.back()]<=arr[i]){
                q.pop_back();
            }
            q.push_back(i);
            ans.push_back(arr[q.front()]);
        }
        return ans;
    }
};