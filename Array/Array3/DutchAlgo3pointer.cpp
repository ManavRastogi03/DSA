#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,0,2,1,2};
    int lo=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int hi=n-1;
    int mid=0;
    while(mid<=hi){
        if(arr[mid]==2){
            swap(arr[mid],arr[hi]);
            hi--;
        }
        if(arr[mid]==0){
            swap(arr[mid],arr[lo]);
            lo++;
            mid++;
        }
        if(arr[mid]==1){
            mid++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}