#include <bits/stdc++.h>
using namespace std;
void sang_nt(int a[], int n){
    for(int i=0; i<n; i++){
        a[i]=1;
    }
    a[0]=a[1]=0;
    for(int i=2; i<=sqrt(n); i++){
        if(a[i]==1){
            for(int j=i*i; j<n; j+=i){
                a[j]=0;
            }
        }
    }
}
int main(){
    int a[100];
    int n; cin>>n;
    sang_nt(a, n);
    for(int i=0; i<n; i++){
        if(a[i]==1) cout<<i<<" ";
    }
    return 0;
}