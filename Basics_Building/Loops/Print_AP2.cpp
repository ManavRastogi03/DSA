#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=100;
    for(int i=1;i<=n;i++){
        cout<<a<<",";
        a-=3;
    }
}