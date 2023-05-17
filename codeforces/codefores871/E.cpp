#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define f first
#define s second
using namespace std;

int n, m, a[1001][1001];
int mo[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int flood(int i, int j) {
    int v = a[i][j];
    a[i][j] = 0;
    for(int k=0;k<4;k++) {
        int ni = i+mo[k][0];
        int nj = j+mo[k][1];
        if(ni>=0 && ni<n && nj>=0 && nj<m && a[ni][nj]!=0)
            v += flood(ni, nj);
    }
    return v;
}

void sol() {
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
    int mx = 0;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) {
        if(a[i][j]!=0) {
            mx = max(mx, flood(i, j));
        }
    }
    cout<<mx<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) sol();
}