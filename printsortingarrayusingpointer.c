#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 1, 6, 7}, i;
    int n = sizeof(a) / sizeof(int);
    int *p1 = a;
    int *p2 = &a[0];
    printf("%d %d\n", p1, p2);
    // a[0] is address of array
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d,", *(p1 + i));
    }
    for (i = 0; i <= n / 2 - 1; i++)
    {
        int t = *(p1 + i);
        *(p1 + i) = *(p1 + n - 1 - i);
        *(p1 + n - 1 - i) = t;
    }
    printf("\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d,", *(p1 + i));
    }
    printf("\n");
    int j;
    for (j = 0; j <= n - 1; j++)
    {
        for (i = 0; i <= n - 1; i++)
        {
            if (*(p1 + i) > *(p1 + i + 1))
            {
                int temp = *(p1 + i);
                *(p1 + i) = *(p1 + i + 1);
                *(p1 + i + 1) = temp;
            }
        }
    }
    for (i = 0; i <= n - 1; i++)
        printf("%d,", *(p1 + i));
}