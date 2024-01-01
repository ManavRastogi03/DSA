#include<iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    int y=(int)x;
    if(y>=97&&y<=122) cout<<"a to z lie";
    else if(y>=65&&y<=90) cout<<"Ato Z lie";
    else cout<<"Not a Alphabet";
}