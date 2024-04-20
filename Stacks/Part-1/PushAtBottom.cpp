#include<iostream>
#include<stack>
using namespace std;
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
}
void pushAtBottom(stack<int>& st,int val){
    stack<int> helper;
    while(st.size()>0){
        int x=st.top();
        helper.push(x);
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        int x=helper.top();
        helper.pop();
        st.push(x);
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    pushAtBottom(st,80);
    display(st);
    cout<<endl;
}