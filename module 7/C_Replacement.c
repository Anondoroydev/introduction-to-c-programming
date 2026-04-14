#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x > 0)
            printf("1 ");
        else if (x < 0)
            printf("2 ");
        else
            printf("0 ");
    }

    return 0;
}