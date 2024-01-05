#include<iostream>
using namespace std;
void find(int n,int* ptr1,int* ptr2){
    *ptr1=n%10;
    while(n>9){
        n/=10;
    }
    *ptr2=n;
}
int main(){
    int n;
    cin>>n;
    int last;
    int first;
    int* ptr1= &last;
    int* ptr2=&first;
    find(n,ptr1,ptr2);
    cout<<last<<endl;
    cout<<first;
}