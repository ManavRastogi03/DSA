#include<iostream>
using namespace std;
int fact(int n){
    int factor=1;
    for(int i=1;i<=n;i++){
        factor*=i;
    }
    return factor;
}
int comb(int n,int r){
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    return nfact/(rfact*nrfact);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}