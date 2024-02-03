#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,4,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            else{
                swap(arr[j],arr[j-1]);

            }
            j--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}