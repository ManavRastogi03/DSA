#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int target;
    cin>>target;
    int idx=-1;
    for(int i=v.size();i>=0;i--){
        if(target==v[i]) {
            idx=i;
            break;
        }
    }
    if(idx==-1) cout<<"Not exist";
    else cout<<idx;

}