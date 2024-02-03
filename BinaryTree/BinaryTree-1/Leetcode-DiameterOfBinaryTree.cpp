#include <iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;
};
int main(){
class Solution {
public:
    int Level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(Level(root->right),Level(root->left));
    }
    void helper(TreeNode* root,int &maxDia){
        if(root==NULL) return;
        int dia=Level(root->left)+Level(root->right);
        maxDia=max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);
    }
    int diameterOfBinaryTree(TreeNode* root){
        int maxDia=0;
        helper(root,maxDia);
        return maxDia;
    }
};
}