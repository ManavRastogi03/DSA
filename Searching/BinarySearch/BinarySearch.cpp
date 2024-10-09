#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int hi=n-1;
    int lo=0;
    int target;
    cin>>target;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(target==arr[mid]){
            cout<<mid;
            break;
        }
        else if(arr[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
}
// For T.C n/2^x=1;
// T.c=Log(n)