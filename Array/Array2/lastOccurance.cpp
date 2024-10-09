#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,45,6,3,1,-1};
    int n=v.size();
    int x=1;
    int idx=-1;
    for(int i=n-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout<<"This is does not Exists";
    }
    else{
        cout<<"The value is in"<<idx;
    }
}