#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[]={1,4,2,7,46};
    display(arr);
    change(arr);
    display(arr);
}