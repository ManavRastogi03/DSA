#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        if(i%2==0){
            q.pop();
        }
        else{
            cout<<x<<" ";
            q.pop();
            q.push(x);
        }
    }
}