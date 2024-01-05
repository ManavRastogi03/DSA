#include<iostream>
using namespace std;
int main(){
    int x=10;
    int* p=&x;
    *p=16;
    cout<<*p<<endl;
    cout<<x;
}