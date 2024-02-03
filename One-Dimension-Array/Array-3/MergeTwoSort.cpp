#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> merge(vector<int>& v1,vector<int>& v2){
    int n1=v1.size();
    int n2=v2.size();
    vector<int> v(n1+n2);
    int i=0;
    int j=0;
    int k=0;
    while(i<=v1.size() && j<=v2.size()){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            k++;
            i++;
        }
        else if(v1[i]>v2[j]){
            v[k]=v2[j];
            k++;
            j++;
        }
    }
    while(i<v1.size()){
        v[k]=v1[i];
        k++;
        i++;
    }
    while(j<v2.size()){
        v[k]=v2[j];
        k++;
        j++;
    }
    return v;
    
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    display(v1);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    display(v2);

    vector<int> v=merge(v1,v2);
    display(v);


}