#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,6,7,8,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=1;i<n;i++){
    //     if(arr[i]!=i){
    //         cout<<i;
    //         break;
    //     }
    // }
    int hi=n-1;
    int lo=0;
    int ans=0;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
}