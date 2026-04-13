#include <stdio.h>

int main()
{

    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int n;
        scanf("%d", &n);

        long long fact = 1;

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("%lld\n", fact);
    }

    return 0;
}