#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>c){
        if(a>b){
            cout<<a;
        }
        else{
            cout<<b;
        }
    }
    else{
        if(c>b){
            cout<<c;
        }
        else{
            cout<<b;
        }
    }

}