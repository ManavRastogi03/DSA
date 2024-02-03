#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,4,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        int min=INT16_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}