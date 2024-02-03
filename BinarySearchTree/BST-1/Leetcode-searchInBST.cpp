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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        if(root->val<val)  return searchBST(root->right,val);
        else if(root->val>val) return searchBST(root->left,val);
        else if(root->val==val)return root;
        return root;
    }
};