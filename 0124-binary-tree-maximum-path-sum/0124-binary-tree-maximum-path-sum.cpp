/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // assigning global maximum root sum
    int maxi=INT_MIN;
    
    int dfs(TreeNode*root)
    {
	// if we are in leaf node then we'll return 0
        if(!root)
        {
            return 0;
        }
		
		// taking left and right max value as 0 and traversing it in dfs manner
		
        int l = max(0,dfs(root->left));
        int r = max(0, dfs(root->right));
        
        maxi = max(l+r+root->val,maxi);
        
        return max(l,r)+root->val;
        
    }
    int maxPathSum(TreeNode* root) {
         maxi = INT_MIN;
        
        dfs(root);
        
        return maxi;
    }
};