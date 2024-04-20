#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void remove(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=0;i<s.length();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    s="";
    while(st.size()!=0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
int main(){
    string s;
    s="aabbccddeff";
    remove(s);
}