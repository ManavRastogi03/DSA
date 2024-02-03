#include<iostream>
#include<vector>
using namespace std;
class Maxheap{
public:
    vector<int> hp;
    void upheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else{
                break;
            }
        }
    }
    void popEle(int idx){
           hp[idx]=INT8_MAX;
            upheapify(idx);
            pop();
    }
    void downheapify(int idx){
            while(idx<hp.size()){
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=hp.size()) break; 
            // int maxEle=max(hp[idx],max(hp[lc],hp[rc]));
            // swap(hp[idx],hp[maxEle]);
            int maxEle=idx;
            if(hp[lc]>hp[maxEle]){
                maxEle=lc;
            }
            if(rc<hp.size() && hp[rc]>hp[maxEle]){
                maxEle=rc;
            }
            if(idx!=maxEle){
                swap(hp[idx],hp[maxEle]);
                idx=maxEle;
            }
            else break;
        }
    }
    void pop(){
        if(empty()) return;
        else{
            swap(hp[hp.size()-1],hp[0]);
            hp.pop_back();
            downheapify(0);
        }

    }
    void push(int ele){
        hp.push_back(ele);
        upheapify(hp.size()-1);
    }
    bool empty(){
        return hp.size()==0;
    } 
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" "; 
        }
        cout<<endl;
    }
};
int main(){
    Maxheap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    hp.popEle(2);
    // hp.pop();
    // hp.pop();
    // hp.pop();
    hp.display();
}