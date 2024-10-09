#include<iostream>
using namespace std;
int main(){
    int arr[]={12,2,3,4,455,667,88,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    // cout<<max;
    int sm=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && sm<arr[i]){
            sm=arr[i];
        }
    }
    cout<<sm;
}