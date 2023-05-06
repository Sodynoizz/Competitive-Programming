#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
    bool dp[125]={0};
    dp[0] = 1;
    for(int i = 0; i <= 100; i++){
        if(!dp[i]) continue;
        dp[i + 6] = 1;
        dp[i + 9] = 1;
        dp[i + 20] = 1;
    }
    int n; cin >> n;
    if (n < 6) { cout << "no"; return 0; }
    for(int i = 6; i <= n; i++) if (dp[i]) cout << i << '\n';
    return 0;
}