#include <iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;
};
class Solution {
public:
    void helper(vector<string>& ans,string s,TreeNode* root){
        if(root==NULL) return;
        string a=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            s+=a;
            ans.push_back(s);
        }
        helper(ans,s+a+"->",root->left);
        helper(ans,s+a+"->",root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(ans,"",root);
        return ans;

    }
};