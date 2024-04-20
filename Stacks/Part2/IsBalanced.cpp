#include<iostream>
#include<stack>
#include<string>
using namespace std;
void IsBalanced(string s){
    if(s.length()%2!=0){
        cout<<"This not Balanced";
        return;
    }
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.size()==0){
                cout<<"This not balanced";
                return;
            }
            st.pop();
        }
    }
    if(st.size()==0){
        cout<<"The String is Balanced";
    }
    else{
        cout<<"The string is not balanced";
    }

}
int main(){
    string s="((())";
    IsBalanced(s);
}