#include<iostream>
using namespace std;
int main(){
    int arr[]={9,100,1,2,102,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT16_MIN;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            max=arr[i];
        }
    }
    cout<<max;
}