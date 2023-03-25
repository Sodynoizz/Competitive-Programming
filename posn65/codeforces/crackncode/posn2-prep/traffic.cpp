#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
using namespace std;

struct road{
    int v, w, f;
};

vector<road> adj[100001];

int distance(int time, int w, int f) {
    time %= 2*f;
    int ans = 0;
    if(time>f) {
        ans += 2*f - time;
    } else if(f-time>=w) {
        return ans + w;
    } else {
        ans += f-time;
        w -= f-time;
        ans += f;
    }
    int wdf = w/f;
    w %= f;
    ans += 2*f*wdf;
    if(w==0) return ans - f;
    return ans + w;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, e;
    cin>>n>>e;
    for(int i=0;i<e;i++) {
        int u, v, w, f;
        cin>>u>>v>>w>>f;
        adj[u].push_back({v, w, f});
        adj[v].push_back({u, w, f});
    }
    vector<int> minDist(n+1, INT_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    minDist[1] = 0;
    pq.push({0, 1});
    while(!pq.empty()) {
        int currDis = pq.top().first;
        int curr = pq.top().second;
        pq.pop();

        for(auto i:adj[curr]) {
            int dis = distance(currDis, i.w, i.f);
            int next = i.v;

            if(minDist[next]>currDis+dis) {
                minDist[next] = currDis+dis;
                pq.push({minDist[next], next});
            }
        }
    }
    cout<<minDist[n];
}