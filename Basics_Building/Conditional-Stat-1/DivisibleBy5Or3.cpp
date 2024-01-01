#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%3==0 || x%5==0) cout<<"Divisible By 5 Or 3";
    else cout<<"Not Divisible By 3 Or 5";
}