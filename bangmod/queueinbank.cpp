#include <bits/stdc++.h>
using namespace std;

string name[5005];
int a, b;
int mod = 100000;
int sta[3] = {-1, -1, -1};
int pr[3];

void print2(int idx)
{
    if (idx == -1)
    {
        cout << "-(-) ";
    }
    else
    {
        cout << name[idx] << (idx < a ? "(acc) " : "(w/d) ");
    }
}

void print()
{
    for (int i = 0; i < 3; i++)
        print2(pr[i]);
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    for (int i = 0; i < a + b; i++)
    {
        cin >> name[i];
    }
    int cta = 0, ctb = 0;
    while (cta < a || ctb < b)
    {
        if (sta[0] == -1)
        {
            if (cta < a)
            {
                sta[0] = cta++;
            }
            else
            {
                sta[0] = a + (ctb++);
            }
        }

        for (int i = 1; i <= 2; i++)
        {
            if (sta[i] == -1)
            {
                if ((a - cta) * 2 > (b - ctb) && cta < a)
                {
                    sta[i] = cta++;
                }
                else if (ctb < b)
                {
                    sta[i] = a + (ctb++);
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            pr[i] = -1;
            if (sta[i] == -1)
                continue;
            if (sta[i] % mod < a)
            {
                sta[i] += mod;
                if (sta[i] / mod == 3)
                {
                    pr[i] = (sta[i] < 0 ? sta[i] : sta[i] % mod);
                    sta[i] = -1;
                }
            }
            else
            {
                pr[i] = sta[i];
                sta[i] = -1;
            }
        }
        print();
    }
    while (sta[0] != -1 || sta[2] != -1 || sta[1] != -1)
    {
        bool ok = 0;
        for (int i = 0; i < 3; i++)
        {
            pr[i] = -1;
            if (sta[i] == -1)
                continue;
            ok = 1;
            if (sta[i] % mod < a)
            {
                sta[i] += mod;
                if (sta[i] / mod == 3)
                {
                    pr[i] = sta[i] % mod;
                    sta[i] = -1;
                }
            }
            else
            {
                pr[i] = sta[i];
                sta[i] = -1;
            }
        }
        print();
        if (!ok)
            break;
    }
    pr[0] = pr[1] = pr[2];
    print();
}