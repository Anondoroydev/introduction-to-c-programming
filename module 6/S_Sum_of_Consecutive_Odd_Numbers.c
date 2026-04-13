#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X > Y)
        {
            int tamp = X;
            X = Y;
            Y = tamp;
        }
        int sum = 0;
        for (int i = X + 1; i < Y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}