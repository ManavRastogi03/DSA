#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pge[n];
    stack<int> st;
    pge[0]=-1;
    st.push(arr[0]);
    // cout<<st.top()<<endl;
    for(int i=1;i<n;i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()) pge[i]=-1;
        else pge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
}