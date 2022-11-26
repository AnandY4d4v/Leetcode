//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        // code here
        stack<Node*> s;

        for(int i=0; i<str.size(); i++) {
            Node* child = NULL, *prnt = NULL;
            if(str[i] != '(' && str[i] != ')') {
                string n;
                while(str[i] != '(' && str[i] != ')') n += str[i++];
                s.push(new Node(stoi(n)));
                i--;
            }
            else if(str[i] == ')') {
                child = s.top(); s.pop();
                prnt = s.top();
                if(!prnt -> left) prnt -> left = child;
                else prnt -> right = child;
                
            }
        }
        return s.top();
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends