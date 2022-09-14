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
    vector<int>v;
    unordered_map<int,int>mapping;
    void call(TreeNode*root,int &count)
    {
        if(root == NULL) return ;
        v.push_back(root -> val);
        mapping[root->val]++;
        call(root->left,count);
        call(root -> right,count);
        if(root -> left == NULL && root -> right == NULL)
        {
            int n = v.size(),odd=0;
            for(auto itr = mapping.begin(); itr != mapping.end(); itr++)  /// NOW CHECK VECTOR IS PALINDROM OR NOT
            {
                 if(odd > 1)break;
                if(itr->second%2 == 1 && itr->second != 0) 
                    odd++;
               
            }
            if(odd == 0 || odd == 1) count++;
        }
        mapping[root->val]--;
        if(mapping[root->val] == 0) mapping.erase(root -> val);
        v.pop_back();
    }
    int pseudoPalindromicPaths (TreeNode* root) {
         int count = 0;
        call(root,count);
        return count;
    }
};