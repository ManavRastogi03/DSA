#include<iostream>
using namespace std;
int fact(int n){
    int factor=1;
    for(int i=1;i<=n;i++){
        factor*=i;
    }
    return factor;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int comb=nfact/(rfact*nrfact);
    int per=nfact/(nrfact);
    cout<<comb<<endl;
    cout<<per;

}