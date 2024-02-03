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
class LinkedList{//user definfed data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtBegnning(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insert(int idx,int val){
        if(idx==0) insertAtBegnning(val);
        else if(idx==size-1) insertAtEnd(val);
        else{
            Node* temp=head;
            Node* a=new Node(val);
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            a->next=temp->next;
            temp->next=a;
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
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0) cout<<"List is empty";
        else{
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
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
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtBegnning(90);
    ll.display();
    ll.insert(2,100);
    ll.display();
    ll.insert(2,400);
    ll.display();
    ll.getIdx(2);
    ll.deleteAthead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteIdx(1);
    ll.display();
    cout<<ll.size;
}