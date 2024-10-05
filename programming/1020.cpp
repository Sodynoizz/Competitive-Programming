#include <bits/stdc++.h>
using namespace std;

bool double_palindrome(string s) {
       
}

bool palindrome(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (tolower(s[i]) != tolower(s[s.size() - i - 1])) {
            return false;
        }
    }
    return true;
}

int main() {
    string s; getline(cin, s);
    if (double_palindrome(s) && palindrome(s)) {
        cout << "Double Palindrome";
    } else if (palindrome(s)) {
        cout << "Palindrome";
    } else {
        cout << "No";
    }
}