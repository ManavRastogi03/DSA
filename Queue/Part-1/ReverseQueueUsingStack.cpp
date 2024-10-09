#include<iostream>
#include<queue>
#include<stack>
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
void reverse(queue<int>& q){
    stack<int> st;
    int n=q.size();
    while(q.size()!=0){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()!=0){
        int x=st.top();
        q.push(x);
        st.pop();
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
    reverse(q);
    display(q);

}