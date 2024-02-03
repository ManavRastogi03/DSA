#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
    void display(Node* head){
        Node* temp=head;
        while (temp!=NULL){                 
            cout<<temp->val<<" ";
            temp=temp->next;   
        }
        cout<<endl;
    }
    int size(Node* head){
        Node* temp=head;
        int n=0;
        while (temp!=NULL){                 
            n++;
            temp=temp->next;   
        }
        cout<<n;
        cout<<endl;

    }
    void recDisplay(Node* head){
        if(head==NULL) return;
        cout<<head->val<<" ";
        recDisplay(head->next);
    }
    void insertAtEnd(Node* head,int val){
        while(head->next!=NULL){
            head=head->next;
        }
        Node* temp=new Node(val);
        head->next=temp;
    }
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    size(a);
    recDisplay(a);
    cout<<endl;
    insertAtEnd(a,90);
    display(a);


    
}