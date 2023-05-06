#include <bits/stdc++.h>
using namespace std;


int main() {
    char c;
    int n; cin >> n;
    while (n--) {
        string a, b, s1, s2, x = {} , y = {};
        cin >> a >> b; s1 += a[0]; s2 += b[0];
        for (int i = 1; i < a.size(); ++i) {
            if (a[i] == 'r') s1 += '6';
            else if (a[i] == 'b' || a[i] == 'f' || a[i] == 'p' || a[i] == 'v') s1 += '1';
            else if (a[i] == 'c' || a[i] == 'g' || a[i] == 'j' || a[i] == 'k' || a[i] == 'q' || a[i] == 's' || a[i] == 'x' || a[i] == 'z') s1 += '2';
            else if (a[i] == 'd' || a[i] == 't') s1 += '3';
            else if (a[i] == 'l') s1 += '4';
            else if (a[i] == 'm' || a[i] == 'n') s1 += '5';
            else continue;
        }

        for (int i = 1; i < b.size(); ++i) {    
            if (b[i] == 'r') s2 += '6';
            else if (b[i] == 'b' || b[i] == 'f' || b[i] == 'p' || b[i] == 'v') s2 += '1';
            else if (b[i] == 'c' || b[i] == 'g' || b[i] == 'j' || b[i] == 'k' || b[i] == 'q' || b[i] == 's' || b[i] == 'x' || b[i] == 'z') s2 += '2';
            else if (b[i] == 'd' || b[i] == 't') s2 += '3';
            else if (b[i] == 'l') s2 += '4';
            else if (b[i] == 'm' || b[i] == 'n') s2 += '5';
            else continue;
        }
        x += s1[0], y += s2[0], c = s1[0];
        for (int i = 1; i < s1.size(); ++i) {
            if(s1[i] != c) x += s1[i], c = s1[i];
            if(x.size()==4) break;
        }

        c=s2[0];
        for(int i = 1; i < s2.size(); ++i){
            if (s2[i] != c) y += s2[i], c = s2[i];
            if (y.size() == 4) break;
        }

        while(x.size() < 4) x += '0';
        while(y.size() < 4) y += '0';

        if(x == y) cout << x << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
