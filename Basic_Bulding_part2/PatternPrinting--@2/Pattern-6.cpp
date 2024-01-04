#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int count=1;
        for(int j=n-1;j>=i;j--){
            cout<<count;
            count++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            count++;
        }
        // count =5;
        for(int q=n-1;q>=i;q--){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}