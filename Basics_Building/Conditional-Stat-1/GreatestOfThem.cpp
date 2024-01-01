#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    if(x1>x2 && x1>x3) cout<<x1;
    else if(x2>x1 && x2>x3) cout<<x2;
    else cout<<x3;

}