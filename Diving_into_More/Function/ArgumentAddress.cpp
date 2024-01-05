#include<iostream>
using namespace std;
void fun(int x){
    cout<<"Fun of x"<<&x<<endl;
}
int main(){
    int x=3;
    cout<<"x of main"<<&x<<endl;
    fun(x);

}