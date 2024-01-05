#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* ptr=&x;
    int** ptr1=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1;
}