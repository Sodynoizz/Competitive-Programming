#include <bits/stdc++.h>

using namespace std;
using ll = long long;

map<char, int> mp{
    {'0', 0},
    {'1', 1},
    {'2', 2},
    {'3', 3},
    {'4', 4},
    {'5', 5},
    {'6', 6},
    {'7', 7},
    {'8', 8},
    {'9', 9},
    {'A', 10},
    {'B', 11},
    {'C', 12},
    {'D', 13},
    {'E', 14},
    {'F', 15},
    {'G', 16},
    {'H', 17},
    {'I', 18},
    {'J', 19},
    {'K', 20},
    {'L', 21},
    {'M', 22},
    {'N', 23},
    {'O', 24},
    {'P', 25},
    {'Q', 26},
    {'R', 27},
    {'S', 28},
    {'T', 29},
    {'U', 30},
    {'V', 31},
    {'W', 32},
    {'X', 33},
    {'Y', 34},
    {'Z', 35}};

map<char, int> mp2{
    {0, '0'},
    {1, '1'},
    {2, '2'},
    {3, '3'},
    {4, '4'},
    {5, '5'},
    {6, '6'},
    {7, '7'},
    {8, '8'},
    {9, '9'},
    {10, 'A'},
    {11, 'B'},
    {12, 'C'},
    {13, 'D'},
    {14, 'E'},
    {15, 'F'},
    {16, 'G'},
    {17, 'H'},
    {18, 'I'},
    {19, 'J'},
    {20, 'K'},
    {21, 'L'},
    {22, 'M'},
    {23, 'N'},
    {24, 'O'},
    {25, 'P'},
    {26, 'Q'},
    {27, 'R'},
    {28, 'S'},
    {29, 'T'},
    {30, 'U'},
    {31, 'V'},
    {32, 'W'},
    {33, 'X'},
    {34, 'Y'},
    {35, 'Z'}};

long long conv1(int a, int b, string s)
{
    long long res = 0, cur = 1;
    reverse(s.begin(), s.end());
    for (auto &e : s)
    {
        res += cur * mp[e];
        cur *= a;
    }
    // return to_string(res);
    return res;
}

string conv2(int a, int b, long long s)
{
    vector<char> v;
    while (s)
    {
        ll cur = s % b;
        s /= b;
        v.emplace_back(mp2[cur]);
    }
    string ret = "";
    for (auto &e : v)
        ret.push_back(e);
    return ret;
}

int main()
{
    int a, b;
    string s;
    cin >> s >> a >> b;
    if (a <= 1 || a >= 37)
        cout << "error", exit(0);
    if (b <= 1 || b >= 37)
        cout << "error", exit(0);
    for (auto &e : s)
        if (isalpha(e) && islower(e))
            cout << "error", exit(0);
    for (auto &e : s)
        if (!isalpha(e) && !isdigit(e))
            cout << "error", exit(0);
    for (auto &e : s)
        if (isdigit(e))
        {
            if (e - '0' >= a)
                cout << "error", exit(0);
        }
        else if (isalpha(e))
        {
            if (e >= a - 9 + 'A')
                cout << "error", exit(0);
        }
    long long ret = conv1(a, b, s);
    string t = conv2(a, b, ret);
    reverse(t.begin(), t.end());
    cout << t;
}