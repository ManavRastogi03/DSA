#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="leetcode";
    vector<int>v(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int n=(int)ch-97; 
        v[n]+=1;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            char n=((char)97+i);
            cout<<n<<" "<<v[i]<<endl;
        }
    }
}