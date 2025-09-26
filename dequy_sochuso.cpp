#include <bits/stdc++.h>
using namespace std;

int so_chuso(int n){
    if(n==0) return 0;
    else return 1+so_chuso(n/10);
   
}
int main(){
    int n; cin>>n;
    int kq=so_chuso(n);
    cout<<kq<<endl;
}