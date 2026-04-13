#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int min = INT_MAX;

    for (int i = 0; i <= n; i++)
    {
        int val;
        scanf("%d", &val);

        if (min > val)
        {
            min = val;
        }
    }

    printf("%d", min);
    return 0;
}