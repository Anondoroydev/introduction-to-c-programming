#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a == 1)
    {
        printf("%d\n", -1);
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}