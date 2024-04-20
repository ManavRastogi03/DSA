#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<pair<int,int>>> graph;
int v;
void add(int src,int dest,int wt,bool bi=true){
    graph[src].push_back({dest,wt});
    if(bi){
        graph[dest].push_back({src,wt});
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele.first<<" "<<ele.second<<",";
        }
        cout<<"\n";
    }
}
int main(){
    cin>>v;
    graph.resize(v,list<pair<int,int>> ());
    int e;
    cin>>e;
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        add(s,d,wt);
    }
    display();

}