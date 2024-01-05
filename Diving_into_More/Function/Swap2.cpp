#include<iostream>
using namespace std;
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}
int main(){
    cout<<3<<" "<<4<<endl;
    swap(3,4);
}