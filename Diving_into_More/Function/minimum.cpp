#include<iostream>
using namespace std;
int mini(int x,int y){
    if(x>y) return y;
    else return x;

}
int main(){
    cout<<mini(3,5);
}