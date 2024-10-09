#include<iostream>
using namespace std;
int main(){
    int arr[]={5,0,3,1,0,2,0,5};
    int n=7;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}