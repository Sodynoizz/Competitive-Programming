#include <stdio.h>
int main()
{
    int n[3], b[3];
    char a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]);
    }
    scanf("%s", a);
    int min = n[0], max = n[0];
    for (int j = 0; j < 3; j++)
    {
        if (n[j] <= min)
        {
            min = n[j];
        }
        if (n[j] >= max)
        {
            max = n[j];
        }
    }
    b[0] = min;
    b[2] = max;

    for (int i = 0; i < 3; i++)
    {
        if (n[i] != min) {
            if (n[i] != max) {
                b[1] = n[i];
            }
        }
    }

    /* 
    for(int i=0;i<3;i++)
    {
        if(n[i]!=max && n[i]!=min)
        {
            b[1]=n[i];
            break;
        }
        
    }
    */

    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 65)
        {
            printf("%d ", b[0]);
        }
        else if (a[i] == 66)
        {
            printf("%d ", b[1]);
        }
        else
        {
            printf("%d ", b[2]);
        }
    }
}