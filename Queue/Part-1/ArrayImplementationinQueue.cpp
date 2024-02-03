#include<iostream>
#include<queue>
using namespace std;
class Queue{
public:
    int arr[5];
    int f=0;
    int b=0;
    int s=0;
    void push(int val){
        if(b==5){
            cout<<"Overflow";
            return;
        }       
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(b-f==0){
            cout<<"Underflow";
            return;
        }
        f++;
        s--;
    }
    void front(){
        if(s==0){
            cout<<"Underflow";
            return;
        }
        cout<<f<<endl;
    }
    void back(){
        if(s==0){
            cout<<"Underflow";
            return;
        }
        cout<<b;
    } 
    void size(){
        cout<<b-f;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.size();
}