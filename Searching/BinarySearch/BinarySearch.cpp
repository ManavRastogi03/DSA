#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,19,21,64};
    int n=10;
    int x=18;
    int hi=n-1;
    int lo=0;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(arr[mid]>x){
            hi=mid-1;
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            cout<<mid;
            break;
        }
    }

}