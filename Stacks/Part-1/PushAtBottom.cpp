#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        int x=st.top();
        cout<<x<<" ";
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;
}
void pushAtBottom(stack<int> &st,int val){
    stack<int> temp;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
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
    print(st);
    pushAtBottom(st,80);
    print(st);


}