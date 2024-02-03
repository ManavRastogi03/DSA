#include<iostream>
#include<vector>
using namespace std;
class Minheap{
public:
    vector<int> hp;
    void upheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[pi]>hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else break;
        }
    }
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<endl;
    }
    void push(int ele){
        hp.push_back(ele);
        upheapify(hp.size()-1);
    }
};
int main(){
    Minheap hp;
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
}