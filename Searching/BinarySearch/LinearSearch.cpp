#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,21,78};
    int n=5;
    int target;
    cin>>target;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
        }
    }
    if(flag){
        cout<<"IT is Pesent";
    }
    else{
        cout<<"It is not present";
    }
}