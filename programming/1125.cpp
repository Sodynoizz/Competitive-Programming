#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(0)->ios_base::sync_with_stdio(false)

int main(){
    boost;
	int n, i, j, ans = 0;
	cin >> n;
	int x[n], y[n];
	for(i = 0; i < n; i++) cin >> x[i] >> y[i];
	for(i = 0; i < n; i++) 
		for(j = i + 1; j < n; j++)
			ans += abs(x[i] - x[j]) + abs(y[i] - y[j]);
	printf("%d", ans);
    return 0;
}