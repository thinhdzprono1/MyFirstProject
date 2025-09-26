#include <bits/stdc++.h>
using namespace std;
void max(int a, int b, int c){
    if(a>=b && a>=c){
        cout<<"max: "<<a<<endl;
    }
    else if(b>=c){
        cout<<"max: "<<b<<endl;
    }
    else cout<<"max: "<<c<<endl;
}
int main(){
    int a,b,c; cin>>a>>b>>c;
    max(a,b,c);
}