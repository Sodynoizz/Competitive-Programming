#pragma GCC optimize("Ofast,unroll-loops") 
#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(false)->ios_base::sync_with_stdio(false);
#define endl '\n'

int main() {
    boost;    
    int n; cin >> n;   
    int mxh = 0, mxw = 0;
    vector<vector<char>> a;
    a.resize(10, vector<char>(80,'.'));
    for (int t = 0; t < n; t++) {
        int w, h; cin >> w >> h;
        mxh = max(h, mxh); mxw = max(w + 2 * h, mxw);
        for (int i = 0; i < h; i++) {
            for (int j = w - 1; j < w + 2 * h; j++) {
                if (i == j - w + 1) {
                    if (a[i][j] == '.') a[i][j] = '/';
                    else if (a[i][j] == '\\') a[i][j] = 'v';
                }

                if (i + j - w == 2 * h - 2) {
                    if (a[i][j] == '.') a[i][j] = '\\';
                    else if (a[i][j] == '/') a[i][j] = 'v';
                }

                if (j - w + 1 > i && i + j - w < 2 * h - 2) a[i][j] = 'X';  
            }
        }
    }

    for (int i = mxh - 1; i >= 0; i--) {
        for (int j = 0; j < mxw - 1; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
     
    return 0;
}