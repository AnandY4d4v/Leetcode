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
     int find(vector<int>&in,int k,int n){
        for(int i=0;i<n;i++){
            if(k==in[i]) return i;
        }
             return -1;
    }
    TreeNode* construct(vector<int>&in,vector<int>&pre, int &pi,int is,int ie,int n)
    {
        if(pi>=n|| is>ie) return NULL;
        
        int ele=pre[pi++];
        TreeNode* root= new TreeNode(ele);
        int pos=find(in,ele,n);
        
        root->left=construct(in,pre,pi,is,pos-1,n);
        root->right=construct(in,pre,pi,pos+1,ie,n);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> in= preorder;
        sort(in.begin(),in.end());
        int n = preorder.size();
	   int pi=0;
        TreeNode* ans=construct(in, preorder,pi , 0,n-1,n );
        return ans;
        
    }
};