#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long a[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum += a[i];
    }

    if (sum < 0)
    {
        sum = -sum;
    }

    printf("%lld\n", sum);

    return 0;
}