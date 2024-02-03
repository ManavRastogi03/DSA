#include<iostream>
#include<vector>
using namespace std;
class Maxheap{
public:
    vector<int> hp;
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<endl;
    }
    void downheapify(int idx){
        while(idx<hp.size()){
            int lc=2*idx+1;
            int rc=2*idx+2;
            int maxele=idx;
            if(lc>hp.size()) break;
            if(hp[lc]<hp[maxele]) maxele=idx;
            else if(rc<hp.size() && hp[rc]>hp[maxele]){
                maxele=rc;
            }
            if(maxele!=idx){
                swap(hp[maxele],hp[idx]);
                idx=maxele;
            }
            else{
                break;
            }

        }
    }
    void upheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[ci],hp[pi]);
                ci=pi;
            }
            else break;
        }
    }
    Maxheap(vector<int> v){
        hp=v;
        for(int i=0;i<hp.size();i++){
            upheapify(i);
        }
    }    
};
int main(){
    vector<int> v={9,6,1,19,3,2,8,12,5};
    
    Maxheap hp(v);
    hp.display();

}