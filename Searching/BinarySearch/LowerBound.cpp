#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int target;
    cin>>target;
    bool flag =true;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            flag=false;
            cout<<arr[mid-1];
            break;
        }
        if(arr[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    if(flag){
        cout<<arr[hi];
    }
}