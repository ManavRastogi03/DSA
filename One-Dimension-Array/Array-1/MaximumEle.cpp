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
    int idx=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            idx=i;
        }
    }
    cout<<idx;
}