#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v={"flower","flow","flight"};
    int n=v.size();
    sort(v.begin(),v.end());
    string first=v[0];
    string last=v[n-1];
    string s="";
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]) s+=last[i];
       
    }
    cout<<s;
}