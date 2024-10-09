#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="AXZYJXKNKYZUYRVOPZJXXY";
    string s;
    for(int i=0;i<str.length();i++){
        if(str[i]>='X'){
            s.push_back(str[i]);
        }
    }
    cout<<s<<endl;
    int n=s.length();
    // cout<<n;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag=false;
            }

        }
        if(flag){
            break;
        }
    }
    cout<<s;
}