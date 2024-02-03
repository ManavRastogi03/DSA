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
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    display(v);
    int noz=0;
    int noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        if(v[i]==1) noo++;
    }
    int i=0;
    while(noz>0){
        v[i]=0;
        i++;
        noz--;
    }
    while(noo>0){
        v[i]=1;
        i++;
        noo--;
    }
    display(v);

}