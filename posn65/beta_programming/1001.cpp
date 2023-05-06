#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(NULL)->ios_base::sync_with_stdio(false)

int main() {
    boost;
    int row, col; cin >> row >> col;
    char s[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0;j < col; j++) {
            cin >> s[i][j];
        }
    }
    
    for (int i = 0; i < col; i++) {
        int j, k; cin >> k;
        for (j = 0; j < row; j++) if (s[j][i] == 'O') break;
        int stuck = j - 1;
        for (int l = 0; l < k; l++) {
            if (stuck - l < 0) break;
            else s[stuck - l][i] = '#';
        }
    }
   
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) 
            cout << s[i][j];
        cout << endl;
    }
    
    return 0;
}