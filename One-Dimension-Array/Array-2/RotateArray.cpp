#include<iostream>
#include<vector>
using namespace std;
void ReversePart(int i,int j,vector<int>& v){
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    int n=v.size();
    int k=3;
    if(k>n) k%=n;
    display(v);
    ReversePart(0,n-k-1,v);
    ReversePart(n-k,n-1,v);
    ReversePart(0,n-1,v);
    display(v);


}