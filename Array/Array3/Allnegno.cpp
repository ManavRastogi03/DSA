#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>& v){
    int j=v.size()-1;
    int i=0;
    while(j>i){
        if(v[i]>0) i++;
        if(v[j]<0) j--;
        else if(v[i]<0 && v[j]>0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v={1,-2,3,-4,-5,6,2};
    int n=v.size();
    sorted(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}