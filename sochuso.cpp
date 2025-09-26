#include<bits/stdc++.h>
using namespace std;

int so_chuso(int n){
    int k=0;
    while(n>0){
        n/=10;
        k++;
    }
    return k;
}

int main(){
    int n; cin>>n;
    int kq=so_chuso(n);
    cout<<kq<<endl;
}