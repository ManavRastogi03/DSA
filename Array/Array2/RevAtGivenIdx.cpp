#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,6,2,3,7,4};
    int FirstIdx;
    int SceondIdx;
    cin>>FirstIdx;
    cin>>SceondIdx;
    int n=v.size();
    while(SceondIdx>FirstIdx){
        swap(v[FirstIdx],v[SceondIdx]);
        FirstIdx++;
        SceondIdx--;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}