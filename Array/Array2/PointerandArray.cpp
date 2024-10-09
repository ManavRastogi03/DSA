#include<iostream>
using namespace std;
int main(){
    int arr[]={12,23,44,56,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int* ptr=&arr[0];
    cout<<ptr<<endl;
    ptr[0]=10;
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
}