#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i==1) cout<<1<<" ";
        else if(i==2) cout<<1<<" ";
        else{
            sum=a+b;
            a=b;
            b=sum;
            cout<<sum<<" ";
        }   
    }

}