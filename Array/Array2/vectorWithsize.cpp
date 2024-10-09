#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& v){
    v[0]=100;
}
int main(){
    vector<int> v(5,7);
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    change(v);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


}