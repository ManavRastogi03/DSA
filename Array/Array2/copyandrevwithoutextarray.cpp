#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={6,1,4,3,4,2,3,1};
    int n=v.size();
    int i=0;
    int j=n-1;
    while(j>i){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}