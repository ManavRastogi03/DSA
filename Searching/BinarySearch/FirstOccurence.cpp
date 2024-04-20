#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int hi=n-1;
    int lo=0;
    bool flag=true;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag=false;
                cout<<mid;
                break;
            }
            else{
                hi=mid-1;
            }

        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }

    }
    if(flag){
        cout<<-1;
    }
}