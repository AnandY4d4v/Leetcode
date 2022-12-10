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
    long long totalSum=0, res=0, MOD_VALUE= 1e9+7, sum=0;
    int findMaxSum(TreeNode* root){
      if(!root) return 0;
      sum= root->val + (findMaxSum(root->left)) + (findMaxSum(root->right));
      res= max(res, (sum*(totalSum-sum)));
      return sum;
    }
    int maxProduct(TreeNode* root) {
         totalSum= findMaxSum(root);
       findMaxSum(root);
       return res%MOD_VALUE;
    }
};