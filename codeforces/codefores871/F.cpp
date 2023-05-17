#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define f first
#define s second
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        vector<int> deg(n+1, 0);
        while(m--) {
            int u, v;
            cin>>u>>v; 
            deg[u]++;
            deg[v]++;
        }
        int x = 0, y = 0;
        for(int i=1;i<=n;i++) {
            if(deg[i]==1) continue;
            if(y==0) y = deg[i];
            else if(x==0 && deg[i]!=y) x = deg[i];
            else if(deg[i]==x) swap(x, y);
            //cout<<'\t'<<deg[i]<<' '<<x<<' '<<y<<endl;
        }
        y--;
        cout<<x<<' '<<y<<'\n';
    }
}