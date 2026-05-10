// #include <stdio.h>

// int main()
// {
//     int a[5];
//     scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
//     printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

//     return 0;
// }

// or

#include <stdio.h>

int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}