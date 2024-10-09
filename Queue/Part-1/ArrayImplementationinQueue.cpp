#include<iostream>
using namespace std;
class Queue{
public:
    int arr[5];
    int f;
    int b;
    Queue(){
        f=0;
        b=0;
    }

    void push(int val){
        if(b==5){
            cout<<"Overflow";
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(size()==0) return;
        f++;
    }
    int size(){
        return b-f;
    }
    int front(){
        if(size()==0) return -1;
        return arr[f];
    }
    int back(){
        if(size()==0) return -1;
        return arr[b-1];
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
    // q.push(60); 
    q.pop();
    q.display();

}