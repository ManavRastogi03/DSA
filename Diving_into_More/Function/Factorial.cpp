#include<iostream>
using namespace std;
int fact(int x){
    int factor=1;
    for(int i=1;i<=x;i++){
        factor*=i;
    }   
    return factor;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fact(i)<<" ";
    }
}