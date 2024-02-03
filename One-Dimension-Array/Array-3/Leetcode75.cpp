#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sortColors(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int noo=0;
        int nuz=0;
        int nu2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) nuz++;
            else if(nums[i]==1) noo++;
            else if(nums[i]==2) nu2++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<nuz) nums[i]=0;
            else if(i<(nuz+noo))nums[i]=1;
            else nums[i]=2;
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
