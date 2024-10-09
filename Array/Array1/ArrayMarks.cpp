#include<iostream>
using namespace std;
int main(){
    int arr[7]={36,35,12,34,52,12,57};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<7;i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
}