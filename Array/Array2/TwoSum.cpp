#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,3,2,4,3,4,1,6};
    int n=v.size();
    int x=7;
    for(int i=0;i<n;i++){
        int s1=v[i];
        for(int j=i+1;j<n;j++){
            if((s1+v[j])==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}