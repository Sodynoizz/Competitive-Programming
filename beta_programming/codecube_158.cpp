#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)

const int N = 1e6 + 5;
int a[N];

int main(){
    boost; int x, y; cin >> x >> y;
    for(int i = 1; i <= y; i++) for(int j = i; j <= y; j += i) a[j]++;
    bool ok=false;
    for(int i = x; i <= y; i++) if(a[i]==3) cout << i << " ", ok = true;
    if(!ok)cout << -1;
}