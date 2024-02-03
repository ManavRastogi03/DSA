#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    int secmax=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && secmax<arr[i]) secmax=arr[i];
    }
    cout<<secmax;
}