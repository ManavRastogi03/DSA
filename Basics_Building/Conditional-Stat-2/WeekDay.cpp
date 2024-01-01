#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch(x){
        case 1: cout<<"Sunday";  break;
        case 2: cout<<"Monday";break;
        case 3: cout<<"Tyesday";break;
        case 4: cout<<"Wednesday";break;
        case 5: cout<<"thrusday";break;
        case 6: cout<<"friday";break;
        case 7: cout<<"Saturday";break;
        default: cout<<"Enter 1 to7";
    }
}