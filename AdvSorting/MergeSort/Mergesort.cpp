#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,vector<int>& brr,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]>brr[j]){
            res[k]=brr[j];
            k++;
            j++;
        }
        else{
            res[k]=arr[i];
            k++;
            i++;
        }
    }
    while(i<arr.size()){
        res[k]=arr[i];
        k++;
        i++;
    }
    while(j<brr.size()){
        res[k]=brr[j];
        k++;
        j++;
    }

}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
}
int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}