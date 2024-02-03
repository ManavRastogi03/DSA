#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sortColors(vector<int>& v) {
    int mid=0;
    int lo=0;
    int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            swap(v[mid],v[hi]);
            hi--;
        } 
        else if(v[mid]==0){
            swap(v[mid],v[lo]);
            lo++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    display(v);
    sortColors(v);
    display(v);

}    
