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
int main(){
    stack<int> st;
    stack<int> gt;
    stack<int> rt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    while(st.size()>0){
        int x=st.top();
        st.pop();
        gt.push(x);
    }
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    print(st);

}