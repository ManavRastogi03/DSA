#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    v.push_back(42);
    v.at(2)=90;
    // cout<<v.at(2);
    for(int i=0;i<4;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++){
         cout<<v.at(i)<<" ";
    }

}