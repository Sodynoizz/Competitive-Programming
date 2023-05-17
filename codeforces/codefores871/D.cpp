#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define f first
#define s second
using namespace std;

bool sol() {
    int n, m;
    cin>>n>>m;
    if(n<m || n==0 || m==0) return 0;
    int ct = 0;
    while(n%3==0) {
        if(n==m) return 1;
        n /= 3;
        ct++;
    }
    //cout<<' '<<ct<<endl;
    if(n==m) return 1;
    while(n<m && ct--) {
        n *= 2;
        if(n==m) return 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) cout<<(sol() ? "YES\n" : "NO\n");
}