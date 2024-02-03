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
int sum(Node* root){
    if(root==NULL) return 0;
    int summ=root->val+sum(root->left)+sum(root->right);
    return summ;
}
int main(){
    Node* a=new Node(5);
    Node* b=new Node(4);
    Node* c=new Node(3);
    Node* d=new Node(6);
    Node* e=new Node(2);
    Node* f=new Node(1);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    cout<<sum(a);

}