#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%3==0 || x%5==0){
        if(x%15==0) cout<<"Divisible By 5,3 And 15";
        else cout<<"Not Divisible By 15 but divisible 5 os 3";
    }
    else{
        cout<<"Not Divisible 5 or 3";
    }

}