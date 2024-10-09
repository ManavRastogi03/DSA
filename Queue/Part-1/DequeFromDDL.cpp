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
    }
};
class Deque{
public:
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head=tail=NULL;
        size=0;
    }
    void pushBack(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;

        }
        size++;
    }
    void pushFront(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void popFront(){
        if(size==0){
            cout<<"UnderFlow";
            return;
        }
        head=head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void popBack(){
        if(size==0){
            cout<<"UnderFlow";
            return;
        }
        else if(size==1){
            popFront();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
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
    Deque q;
    q.pushBack(10);
    q.pushBack(20);
    q.pushBack(30);
    q.pushBack(40);
    q.display();
    q.popBack();
    q.display();
    q.popFront();
    q.display();
    q.pushFront(100);
    q.display();


}