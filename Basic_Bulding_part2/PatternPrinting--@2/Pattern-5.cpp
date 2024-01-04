#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(int q=n-1;q>=i;q--){
            cout<<"*";
        }
        cout<<endl;
    }

}