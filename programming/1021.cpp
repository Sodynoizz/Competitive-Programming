#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    priority_queue<int> pq;
    while (n--)
    {
        string m;
        cin >> m;
        if (m == "P")
        {
            int k;
            cin >> k;
            pq.emplace(k);
        }
        else if (m == "Q")
        {
            if (pq.empty())
                cout << "-1" << endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
}