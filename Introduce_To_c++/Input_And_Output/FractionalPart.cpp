#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    float y=(int)x;
    if(y<0) y=y-1;
    x=x-y;
    cout<<x;
}