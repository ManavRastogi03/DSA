#include<iostream>
#include<stack>
using namespace std;
void displayRec(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRec(st);
    st.push(x);
}
void pushAtBottom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
 
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void revrese(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    revrese(st);
    pushAtBottom(st,x);
}
void display(stack<int>& st){
        stack<int> temp;
        while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        int x=temp.top();
        cout<<x<<" ";
        temp.pop();
        st.push(x);
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRec(st);
    cout<<endl;
    pushAtBottom(st,80);
    display(st);
    revrese(st);
    display(st);
}