#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>& v){
    int n=v.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }

    for(int i=0;i<n;i++){
        if(noz){
            v[i]=0;
            noz--;
        }
        else{
            v[i]=1;
        }
    }
}
int main(){
    vector<int> v={1,1,0,0,1,1,0,1};
    int n=v.size();
    sorted(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}