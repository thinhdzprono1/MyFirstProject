#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    return(b, a%b);
}
int main(){
    int a, b; cin>>a>>b;
    int ucln=gcd(a, b);
    cout<<"ucln cua a, b la: "<<ucln<<endl;
}