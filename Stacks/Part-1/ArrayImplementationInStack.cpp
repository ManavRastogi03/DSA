#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx=-1;
    void push(int val){
        if(idx==5){
            cout<<"OverFlow"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx;
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
    st.push(20);
    st.push(30);
    st.display();
    st.push(40);
    st.push(50);
    st.display();
}