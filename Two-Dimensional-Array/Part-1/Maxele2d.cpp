#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
}