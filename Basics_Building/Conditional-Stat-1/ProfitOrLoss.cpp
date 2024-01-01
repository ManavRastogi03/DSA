#include<iostream>
using namespace std;
int main(){
    int sp;
    int cp;
    cin>>cp>>sp;
    int cal=sp-cp;
    if(cal>0) cout<<"Profit-->"<<cal;
    if(cal==0) cout<<"No Profit No Loss";
    else cout<<"Loss-->"<<cal;
}
