#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)

string add(string s1, string s2) {
    string res;
    int temp = 0;
    int i = s1.length() - 1, j = s2.length() - 1;
    
    while (i >= 0 || j >= 0 || temp) {
        int sum = temp;
        if (i >= 0) sum += s1[i] - '0', i--;
        if (j >= 0) sum += s2[j] - '0', j--;       
        temp = sum / 10, sum %= 10;
        res = static_cast<char>(sum + '0') + res;
    }
    return res;
} 

bool isPalindrome(string s1) {
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    boost; string s, temp; cin >> s;
    while (true) {  
        string temp = s; reverse(temp.begin(), temp.end()); s = add(s, temp);
        if (isPalindrome(s)) { cout << s; return 0; }
    }
    return 0;
}
