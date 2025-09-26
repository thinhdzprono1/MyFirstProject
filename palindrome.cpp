#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int n){
    int res=0;
    int temp=n;
    while(n>0){
        int k=n%10;
        res=res*10+k;
        n/=10;
    }
   
    return res==temp;
}

int main(){
    int n; cin>>n;
    if(Palindrome(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}