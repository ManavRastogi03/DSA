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
int Size(Node* root){
    if(root==NULL) return 0;
    int ans=1+Size(root->left)+Size(root->right);
    return ans;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(8);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    cout<<Size(a);

}