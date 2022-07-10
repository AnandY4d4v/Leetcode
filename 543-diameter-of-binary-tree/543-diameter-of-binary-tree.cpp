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
    
     private:
    int height(TreeNode* node){
        if(node==NULL) return 0;
    int left=(height(node->left));
    int rightt=(height(node->right));
    int ans = max(left, rightt) + 1;
        return ans;
    }
    int diameter(TreeNode* root) {
          if(root==NULL) return 0;
        int h1=(height(root->left)+(height(root->right))+1);
        int d1=diameter(root->left);
        int d2=diameter(root->right);
        int ans=max(h1,max(d1,d2));
        return ans;
    }
  public:
    // Function to return the diameter of a Binary Tree.
public:
    int diameterOfBinaryTree(TreeNode* root) {
         return diameter(root)-1;
        
    }
};