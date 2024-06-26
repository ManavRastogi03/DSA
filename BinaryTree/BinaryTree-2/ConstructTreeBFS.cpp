#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    Node* left;
    Node* right;
    int val;
    Node(int val){
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
};
Node* constuct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT16_MIN){
            l=new Node(arr[i]);
        }
        else l=NULL;
        if(j!=n && arr[j]!=INT16_MIN){
            r=new Node(arr[j]);
        }
        else{
            r=NULL;
        }
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;

    }

    return root;
}
void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        cout<<temp->val<<" ";
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
        cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,INT16_MIN,6,INT16_MIN,INT16_MIN,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    Node* root=constuct(arr,size);
    levelOrderQueue(root);
}