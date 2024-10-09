#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(int i,int j,vector<int>& v){
    while(j>=i){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return v;

}
int main(){
    vector<int> v={1,6,2,3,7,4,8};
    int n=v.size();
    int k;
    cin>>k;
    if(k>n) k=k%n;
    reverse(0,(n-k-1),v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}