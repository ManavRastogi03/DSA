#include<iostream>
using namespace std;
int main(){
    char str[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
}
