#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="Manav is best coder";
    stringstream ss(str);
    string temp;
    while (ss>>temp){
        cout<<temp<<endl;
    }
    
    


}