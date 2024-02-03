#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& v){
    v[2]=100;
}
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    v.push_back(42);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}