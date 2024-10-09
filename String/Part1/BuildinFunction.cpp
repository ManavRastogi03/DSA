#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="Manav Rastogi is Great";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    str.push_back('f');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    string s="abs";
    str+=s;
    cout<<str<<endl;
    string st="abcdferiui";
    reverse(st.begin(),st.end());
    cout<<st;
}