#include<iostream>
using namespace std;
int main(){
    int arr[]={12,2,33,4,555,675,1,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int x=23;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}