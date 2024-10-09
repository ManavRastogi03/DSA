#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>& q,int k){
    int n=q.size();
    stack<int> st;
    for(int i=0;i<k;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    for(int i=0;i<k;i++){
        int x=st.top();
        st.pop();
        q.push(x);
    }
    for(int i=0;i<n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }

}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse(q,2);
    display(q);

}