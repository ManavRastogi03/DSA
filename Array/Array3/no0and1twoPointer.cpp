#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(j>i){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
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