#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivot=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=arr[si]){
            count++;
        }
    }
    int pivotIdx=si+count;
    swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<arr[pivotIdx]){
            i++;
        }
        else if(arr[j]>arr[pivotIdx]){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;

}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
        for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}