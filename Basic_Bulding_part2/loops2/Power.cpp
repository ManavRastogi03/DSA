#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int flag=false;
    if(b<0) {
        flag=true;
        b=-b;
    }
    float power=1;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    if(flag){
        power=1/power;
    }
    cout<<power;
}