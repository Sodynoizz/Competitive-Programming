#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    scanf("%d|%d", &a, &b);
    int mat1[a][b];
    char temp1[a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d, ", &mat1[i][j]);
        }
        scanf("%c", &temp1[i]);
    }
    char temp2;
    cin >> temp2;

    int c, d;
    scanf("%d|%d", &c, &d);
    int mat2[c][d];
    char temp3[c];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d, ", &mat2[i][j]);
        }
        scanf("%c", &temp3[i]);
    }
    char temp4;
    cin >> temp4;

    int mat3[a][d];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout << mat3[i][j] << " ";
        }
        cout << '\n';
    }
}