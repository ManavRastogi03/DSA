#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
class Solution {
public:
    void preorder(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};