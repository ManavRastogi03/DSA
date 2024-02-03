#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int Maximum(Node* root){
    if(root==NULL) return 0;
    int max1=max(root->val,max(Maximum(root->left),Maximum(root->right)));
    return max1;
}
int main(){
    Node* a=new Node(2);
    Node* b=new Node(4);
    Node* c=new Node(10);
    Node* d=new Node(6);
    Node* e=new Node(15);
    Node* f=new Node(11);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    cout<<Maximum(a);

}