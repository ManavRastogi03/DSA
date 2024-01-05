#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}
int main(){
    cout<<3<<" "<<4<<endl;
    swap(3,4);
}