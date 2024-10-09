#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(10);
    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<v[0]<<endl;
    cout<<v.size()<<endl;
}
