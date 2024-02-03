#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[6]={4,2,1,6,1,7};
    int* ptr=&arr[0];
    for(int i=0;i<6;i++){
        cout<<ptr[i]<<" ";
    }
}