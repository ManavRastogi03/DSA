#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<i;
            flag=false;
        }
    }
    if(flag){
        cout<<"Not Exist";
    }

}