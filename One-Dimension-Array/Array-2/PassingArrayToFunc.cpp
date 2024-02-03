#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int n){
    b[0]=100;
}
int main(){
    int arr[5]={1,4,2,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    change(arr,n);
    display(arr,n);

}