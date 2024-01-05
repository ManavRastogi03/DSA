#include<iostream>
using namespace std;
int hcf(int x,int y){
    int gcf=1;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0) {
            gcf=i; 
            break;
        }
    }
    return gcf;
}
int main(){
    cout<<hcf(60,24);
}