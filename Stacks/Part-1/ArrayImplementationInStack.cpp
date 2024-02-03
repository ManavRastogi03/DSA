#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx=-1;
    void push(int val){
        if(idx==4) {
            cout<<"OverFlow";
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Underflow";
            return;
        }
        idx--;
    }
    void top(){
        cout<<arr[idx];
    }
    void size(){
        cout<<idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(30);
    st.push(50);
    st.push(60);
    st.pop();
    st.display();
    st.size();
    
}