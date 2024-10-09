#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="raghav is a math teacher.He is a Dsa mentor as well";
    stringstream ss(str);
    vector<string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    int count=1;
    int mxcount=1;
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(mxcount<count){
            mxcount=count;
        }
    }
    // cout<<mxcount;
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(mxcount==count) cout<<v[i]<<" ";
    }
}