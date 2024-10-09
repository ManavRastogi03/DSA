#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,2,1,4};
    int n=5;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
            swap(arr[mindx],arr[i]);
      
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// best ,Avg,Worst=:0(n2)
// Unstable