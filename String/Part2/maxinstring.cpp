#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> v={"0123","0023","456","00182","940","2901"};
    int n=v.size();
    int mx=0;
    int idx=-1;
    for(int i=0;i<n;i++){
        int v1=stoi(v[i]);
        if(mx<v1){
            mx=v1;
            idx=i;
        }
    }
    cout<<mx<<" "<<idx;
}