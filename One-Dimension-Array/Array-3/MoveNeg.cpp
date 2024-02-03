#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    int i=0;
    int j=v.size()-1;
    display(v);
    while(i<=j){
        if(v[i]>0) i++;
        else if(v[j]<0) j--;
        else if(v[i]<0 && v[j]>0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    display(v);
}