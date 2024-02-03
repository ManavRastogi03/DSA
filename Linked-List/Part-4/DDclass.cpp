#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
class Doubly{//user definfed data structure
public:
    Node* head;
    Node* tail;
    int size;
    Doubly(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insert(int idx,int val){
        if(idx==0) insertAtHead(val);
        else if(idx==size-1) insertAtEnd(val);
        else{
            Node* temp=head;
            Node* a=new Node(val);
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            a->next=temp->next;
            temp->next=a;
            a->prev=temp;
            a->next->prev=a;
            size++;
        }

    }
    void getIdx(int idx){
        if(idx<0 ||idx>size) cout<<"Invalid Index";
        else if(idx==0) cout<<head->val;
        else if(idx==size-1) cout<<tail->val;
        else{
             Node* temp=head;
            for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            cout<<temp->val<<endl;
        }

    }
    void deleteAthead(){
        if(size==0) cout<<"List is empty";
        else{
            head=head->next;
            if(head!=NULL)  head->prev=NULL;
            if(head==NULL) tail=NULL;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0) cout<<"List is empty";
        else{
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void deleteIdx(int idx){
        if(size==0){
            cout<<"List is empty";
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Idx";
        }
        else if(idx==0) deleteAthead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }

        cout<<endl;
    }

};
int main(){
    Doubly dd;
    dd.insertAtHead(100);
    dd.display();
    dd.insertAtEnd(200);
    dd.display();
    dd.insertAtEnd(500);
    dd.display();
    dd.insert(1,1000);
    dd.display();
    dd.deleteAtTail();
    dd.display();
    dd.deleteAthead();
    dd.display();
    dd.insertAtHead(700);
    dd.display();
    dd.insertAtEnd(300);
    dd.display();
    dd.deleteIdx(2);
    dd.display();

}