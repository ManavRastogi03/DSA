#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="abcdefgh";
    int n=s.size()/2;
    reverse(s.begin()+n,s.end());
    cout<<s;

}
