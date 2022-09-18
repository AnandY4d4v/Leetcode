class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
		int n=height.size();
		vector<int> left(n,0);
		vector<int> right(n,0);

		for (int i=1;i<n;i++){
        
        left[i]= max(left[i-1],height[i-1]);
        int j=n-i-1;          
        right[j]=max(right[j+1],height[j+1]);            
        
    }
    
    for(int i=0;i<n;i++){
        ans+=max(0,(min(left[i],right[i])-height[i]));
    }
    return ans;
    }
};