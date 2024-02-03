#include <iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;
};
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val!=q->val) return false;
        bool lft=isSameTree(p->left,q->left);
        if(lft==false) return false;
        bool rgt=isSameTree(p->right,q->right);
        if(rgt==false) return false;
        return true;  
    }
};