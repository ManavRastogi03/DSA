#include<iostream>
using namespace std;
int maximum(int a,int b,int c){
    if(a>c && a>b) return a;
    else if(b>c && b>a) return b;
    else return c;
}
int main(){
    cout<<maximum(2,4,5);
}