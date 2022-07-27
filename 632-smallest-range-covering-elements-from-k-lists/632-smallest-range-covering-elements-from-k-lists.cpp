
class info{
    public:
    int data;
    int row;
    int colm;
    info(int d,int r,int c){
        this->data=d;
         this->row=r;
         this->colm=c;
        
    }
};
class Cmp{
    public:
    bool operator()(info* a, info* b){
        return a -> data > b -> data;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
      int maxi = INT_MIN;
        int mini = INT_MAX;
        priority_queue<info*, vector<info*>, Cmp> minHeap;
        for(int i = 0 ; i < nums.size(); i++){
            int element = nums[i][0];
            info* Info = new info(element, i, 0);
            maxi = max(maxi, element);
            mini = max(mini, element);
            minHeap.push(Info);
        }
        int start = maxi;
        int end = mini;
        while(!minHeap.empty()){ 
            info* temp = minHeap.top();
            minHeap.pop();
            mini = temp -> data;
    
            if(maxi - mini < end - start){
                start = mini;
                end = maxi;
            }
           
            
            if(temp -> colm + 1 < nums[temp -> row].size()){
                maxi = max(maxi, nums[temp -> row][temp -> colm + 1]);
                info* toPush = new info(nums[temp -> row][temp -> colm + 1], temp -> row, temp -> colm + 1);
                minHeap.push(toPush);
            }else
            {
                break;
            }
        }
        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;   
    }
};