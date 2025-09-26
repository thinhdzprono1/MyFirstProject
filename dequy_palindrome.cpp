#include <bits/stdc++.h>
using namespace std;

bool Palindrome(string &s, int l, int r){
    if(l<=r) return true;
    if(s[l]!=s[r]) return false;
    return Palindrome(s, l+1, r-1);

}
int main(){
    string s; cin>>s;
    int l=0, r=s.size()-1;
    if(Palindrome(s, l, r)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}