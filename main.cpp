#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;           
    v.push_back(100);       
    v.push_back(200);
    v.push_back(300);

    cout << "Cac phan tu trong vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
