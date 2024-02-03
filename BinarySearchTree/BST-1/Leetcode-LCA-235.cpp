#include<iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
};
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val || root->val==q->val) return root;
        if(root==NULL) return NULL;
        if(root->val>p->val && root->val<q->val) return root;
        else if(root->val<p->val && root->val>q->val) return root;

        else if(root->val<p->val && root->val<q->val) return  lowestCommonAncestor(root->right,p,q);
        else {
           return lowestCommonAncestor(root->left,p,q);
        }
        return root;
        
    }
};