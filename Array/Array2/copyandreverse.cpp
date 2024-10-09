#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,3,2,4,3,4,1,6};
    int n=v.size();
    vector<int> rev(n);
    for(int i=0;i<n;i++){
        rev[i]=v[(n-1)-i];
    }
    for(int i=0;i<n;i++){
        cout<<rev[i]<<" ";
    }
}