#include <bits/stdc++.h>
using namespace std;

int x, y;
int main(){
    cin>>x;
    vector<int> v;
    for (int i=0; i<x; i++) {cin>>y; v.emplace_back(y);}
    for (int i=0; i<x; i++) cout<<v[i]; 
}