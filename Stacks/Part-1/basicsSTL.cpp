#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    cout<<st.size()<<endl;
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
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

}