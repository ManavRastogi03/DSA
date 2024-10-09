#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,33,4,5,667,780};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=667;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<"1";
            flag=true;
        }
    }
    if(!flag) cout<<"0";
}