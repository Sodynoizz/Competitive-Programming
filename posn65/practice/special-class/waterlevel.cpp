#include <bits/stdc++.h>
using namespace std;

int x, n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cin>>x;

    vector<int> y;
    vector<int> z;
    y.push_back(0), z.push_back(0); 

    for (int i=1; i<=x; i++) {
        cin>>n;
        y.push_back(n);
        z.push_back(n);
    }   

    for (int i=1; i<=x; i++) z[i]=max(z[i-1], z[i]);
    for (int i=x; i>=1; i--) y[i]=max(y[i+1], y[i]);

    for (int i=1; i<x; i++) cout<<min(y[i+1], z[i])<<" ";
}
