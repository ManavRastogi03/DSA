#include<iostream>
#include<stack>
using namespace std;
void Method1(int arr[],int n){
    int nge[n];
    for(int i=0;i<n;i++){
        nge[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                nge[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int> st;
    int nge[n];
    nge[n-1]=-1;
    st.push(arr[n-1]);
    // cout<<st.top();
    for(int i=n-2;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i] ){
            st.pop();
        }
        if(st.empty())  nge[i]=-1;
        
        else nge[i]=st.top();
        

        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}